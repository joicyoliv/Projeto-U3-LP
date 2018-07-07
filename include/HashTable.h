//
//  HashTable.h
//


#ifndef HashTable_h
#define HashTable_h

#include "HashEntry.h"
#include <string>
#include <exception>
#include <iostream>

using namespace std;

static const int TABLE_SIZE = 17;
static const float MIN_ALPHA = 0.125f;
static const float MAX_ALPHA = 0.5f;

template <class K, class V>
class HashTable {
private:
    int size;
    
    int quantity;
    
    void init();
    
    unsigned long preHash(const K);
    
    unsigned long hash(const K);
    
    void resize(int);
    
    void reduce();
    
    void expand();
    
public:
    // Internamente, a Tabela Hash é este array para ponteiros de HashEntry.
    // Deixei público só pra facilitar a implementação dos testes.
    // Mais correto seria deixar este atributo priado.
    HashEntry<K, V> **data;
    HashEntry<K, V> *ENTRY_DELETED = (HashEntry<K,V>*)(-1);
    
    HashTable();
    
    HashTable(const int size);
    
    ~HashTable();
    
    V get(const K key);
    
    bool put(const K key, const V value);
    
    bool remove(const K key);

    bool Vender(const V key);
    
    int getSize();
    
    int getQuantity();
    
    bool isEmpty();
    
    bool isFull();
    
    void print();
    
    float getAlpha();
};



// Variável pra registrarmos que uma posição foi deletada
// Fazemos um cast de (-1) para um ponteiro para HashEntry,
// ou seja, fazemos apontar para uma região inválida
//template <class K, class V>
//HashEntry<K, V> *ENTRY_DELETED = (HashEntry<K,V>*)(-1);

/**
 Construtor que usa tamanho default da tabela.
 */
template <class K, class V>
HashTable<K,V>::HashTable()
{
    this->size = TABLE_SIZE;
    init();
}

/**
 Construtor que recebe tamanho como parâmetro.
 */
template <class K, class V>
HashTable<K,V>::HashTable(const int size)
{
    this->size = size;
    init();
}

/**
 Método auxiliar que é chamado pelos dois construtores.
 Este método quem de fato inicia o array interno da tabela.
 */
template <class K, class V>
void HashTable<K,V>::init()
{
    this->data = new HashEntry<K, V>*[this->size];
    this->quantity = 0;
    for( int i = 0; i < this->getSize(); i++ )
    {
        // Atribui-se nulo às posições da tabela para termos certeza de que estão vazias
        this->data[i] = nullptr;
    }
}

/**
 Destroi todas as entradas da tabela e a própria tabela.
 */
template <class K, class V>
HashTable<K,V>::~HashTable()
{
    for( int i = 0; i < this->getSize(); i++ )
    {
        HashEntry<K, V>* entry = this->data[i];
        
        if( entry != nullptr && entry != ENTRY_DELETED )
        {
            delete entry;
        }
    }
    delete [] data;
}

/**
 Este método deve retornar o 'value' da HashEntry cuja atributo 'key' == parâmetro key.
 Caso contrário, deve retornar 'nullptr'.
 Quantidade de itens na tabela não é modificada.
 */
template <class K, class V>
V HashTable<K,V>::get(const K key)
{
    if(this->isEmpty())
    {
        return;
    }
    
    unsigned long base = hash(key);

    for( auto delta = 0; delta < this->getSize(); delta++)
    {
        long index = (base+delta) % this->getSize();
        HashEntry<K, V>* entry = this->data[index];

        if( entry == nullptr )
        {
            break;
        }
        else if( entry != ENTRY_DELETED && entry->getKey() == key )
        {
            return this->data[index];
        }
    }
    
    return;

}

/**
 Este método deve inserir na tabela um novo HashEntry com 'key' e 'value' recebidos como parâmetros. Neste caso, a quantidade de itens na tabela deve ser incrementada e retorna-se 'true'.
 Caso já exista um HashEntry com atributo 'key' == parâmetro 'key', deve apenas atualizar o atributo 'value' do HashEntry. Neste caso, a quantidade de itens na tabela não é modificada e retorna-se 'true'.
 Caso nã
 */
template <class K, class V>
bool HashTable<K,V>::put(const K key, const V value)
{
    if(this->isFull())
    {
        return false;
    }
    else if( this->getAlpha() >= MAX_ALPHA )
    {
        this->expand();
    }
    
    // implement here
    auto base = this->hash(key);

    int toInsert = -1;

    for (auto d = 0; d < this->getSize(); ++d)
    {
        auto index = (base+d) % this->getSize();

        auto entry = this->data[index];

        //Se a chave for nula, verifica se o toInserte é igual a -1, se sim, salva o index em toInsert e sai do for.
        if (entry == nullptr)
        {
            if (toInsert == -1)
            {
                toInsert = index;
            }
            break;
        }
        //Se a chave for igual a ENTRY_DELETED, salva o valor do index em toInsert
        else if( entry == ENTRY_DELETED)
        {
            toInsert = index;
        }
        // Se a chave passada for igual a chave existente na tabela, atualiza o seu valor
        else if( value == entry->getValue())
        {
            return false;
        }
    }

    //Se o toInsert for diferente de -1, irá inserir a nova entrada no index salvo em toInsert
    if (toInsert != -1)
    {
        auto newEntry = new HashEntry< K, V> (key, value);
        this->data[toInsert] = newEntry;
        ++this->quantity;
        return true;
    }
    //Caso contrário, não foi encontrada nenhuma chave correspondente a entrada e a tabela está cheia
    else
    {
        return false;
    }
}

/**
 Este método deve remover da tabela o HashEntry cujo atributo 'key' == parâmetro 'key'. Neste caso, a quantidade de itens na tabela deve ser dencrementada e retorna-se 'true'.
 Caso não exista um HashEntry com atributo 'key' == parâmetro 'key',a quantidade de itens na tabela não é modificada e retorna-se 'false'.
 */
template <class K, class V>
bool HashTable<K,V>::remove(const K key)
{
    if(this->isEmpty())
    {
        return false;
    }
    else if( this->getAlpha() <= MIN_ALPHA )
    {
        this->reduce();
    }
    
    // implement here}
    auto base = this->hash(key);

    for (auto d = 0; d < this->getSize(); ++d)
    {
        auto index = (base+d) % this->getSize();

        auto entry = this->data[index];
        
        //Se a chave for igual a nula, não é possivél fazer remoção, pois a chave não existe na tabela
        if (entry == nullptr)
        {
            return false;
        }
        //Se a chave for diferente de deletada e igual a chave existente na tabela, remove chave e valor
        else if (entry != ENTRY_DELETED && key == entry->getKey())
        {
            delete this->data[index];
            this->data[index] = ENTRY_DELETED;
            --this->quantity;
            return true;
        }
    }

    return false;
}


template <class K, class V>
bool HashTable<K,V>::Vender(const V key)
{
    if(this->isEmpty())
    {
        return false;
    }
    else if( this->getAlpha() <= MIN_ALPHA )
    {
        this->reduce();
    }
    
    // implement here}
    auto base = this->hash(key->get_Id());

    for (auto d = 0; d < this->getSize(); ++d)
    {
        auto index = (base+d) % this->getSize();

        auto entry = this->data[index];
        
        //Se a chave for igual a nula, não é possivél fazer remoção, pois a chave não existe na tabela
        if (entry == nullptr)
        {
            return false;
        }
        //Se a chave for diferente de deletada e igual a chave existente na tabela, remove chave e valor
        else if (entry != ENTRY_DELETED && key == entry->getValue())
        {
            delete this->data[index];
            this->data[index] = ENTRY_DELETED;
            --this->quantity;
            return true;
        }
    }

    return false;
}

/**
 Este método calcular um valor numérico para a string 'key'.
 */
template <class K, class V>
unsigned long HashTable<K,V>::preHash(const K key)
{
    //try{
        //string y = new string(key);
   // }catch(exception& e){
       // cout<< "Exception " << e.what();
    //}
    long x = 0;
    for(int i = 0; i < key; i++)
    {
        x = x*101 + key;
    }
    return x;
}

/**
 Este método calcular o hash para a string 'key'.
 */
template <class K, class V>
unsigned long HashTable<K,V>::hash(const K key)
{
    unsigned long hashValue = this->preHash(key);
    return hashValue % this->getSize();
}

template <class K, class V>
void HashTable<K,V>::expand()
{
    int newSize = this->getSize() * 2 + 1;
    this->resize(newSize);
}

template <class K, class V>
void HashTable<K,V>::reduce()
{
    int half = this->getSize() / 2;
    int newSize = half % 2 != 0 ? half : half+1;
    this->resize(newSize);
}

template <class K, class V>
void HashTable<K,V>::resize(int newSize)
{
    // SIGA OS COMENTÁRIOS ABAIXO.    
    
    // Cria novo array de ponteiros para HashEntry
    // Coloquei para lembrar de iniciar todas posições com 'nulo'.
    HashEntry<K, V>** newData = new HashEntry<K, V>*[newSize];
    for( int i = 0; i < newSize; i++ )
    {
        newData[i] = nullptr;
    }
    
    auto oldSize = this->size;
    // Atualize o tamanho da tabela (this->size)
    this-> size = newSize;

    // Transifra as entradas válidas que estão no array antigo para o novo
    // BEGIN-FOR     Percorra cada nó do array antigo
    for (auto d = 0; d < oldSize; ++d)
    {
        if (data[d] != nullptr and data[d] != ENTRY_DELETED )
        {
            //  BEGIN-IF    Se entry é válida
            //              Insira no Novo Array, tratando possíveis colisões

            // auto entry_temp = this->data[d]->getKey(); //Entrada temporaria para pegar sua chave
            auto base = this->hash(this->data[d]->getKey());
            // auto index = (base+d) % newSize; //calculando o novo index com a chave temp
            // newData[index] = this->data[d]; //realocando na nova posição


            for (auto b = 0; b < newSize; ++b)
            {
                auto index = (base+b) % newSize;

                if( newData[index] == nullptr)
                {
                    newData[index] = this->data[d];
                    break;
                }
            }
 


        }
    }

    //  END-IF
    // END-FOR
    
    // Delete o antigo array
    // Atualize o this->data para apontar para o novo array
    delete [] this->data;
    this->data = newData;
    
    
    
    //std::cout << "ERRO: Método resize(int) ainda não foi implementado.\n" << std::endl;
    //std::exit(1);
}
template <class K, class V>
inline float HashTable<K,V>::getAlpha()
{
    return (float)this->getQuantity()/this->getSize();
}

/**
 Método que imprime o conteúdo da tabela. Use para ajudar a depurar o programa.
 */
template <class K, class V>
void HashTable<K,V>::print()
{
    for(int i = 0; i < this->getSize(); i++)
    {
        HashEntry<K, V> * entry = data[i];
        if( entry == ENTRY_DELETED )
        {
            std::cout << i << ": DELETED" << std::endl;
        }
        else if( entry != nullptr )
        {
            std::cout << i << ": " << entry->getKey() << " : " << entry->getValue()->get_Batismo() << std::endl;
        }
        else
        {
            std::cout << i << ": []" << std::endl;
        }
    }
}

template <class K, class V>
int HashTable<K,V>::getSize()
{
    return this->size;
}

template <class K, class V>
int HashTable<K,V>::getQuantity()
{
    return this->quantity;
}

template <class K, class V>
bool HashTable<K,V>::isEmpty()
{
    return this->quantity == 0;
}

template <class K, class V>
bool HashTable<K,V>::isFull()
{
    return this->quantity == this->getSize();
}





#endif /* HashTable_h */
