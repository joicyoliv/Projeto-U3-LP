/**
* @file 	animal.h
* @brief    Arquivo cabeçalho contendo as definições e membros de animal
* @author   Joicy Oliveira  (joiicyoliv@gmail.com)
* @author   William Correia (will.correia.lima@gmail.com)
* @since    04/07/2018
* @date     04/07/2018
*/

#ifndef _ANIMAL_H_
#define _ANIMAL_H_

#include <string>
using namespace std;

/**
* @brief Classe Animal
*/
class Animal
{
public:

	/**
	* @brief Construtor paramatrizado
	* @param _id Id do animal
	* @param _classe Classe do animal
	* @param _cientifico Cientifico do animal
	* @param _sexo Sexo do animal
	* @param _tamanho Samanho do animal
	* @param _dieta Dieta do animal
	* @param _vet Veterinario do animal
	* @param _trat Tratador do animal
	* @param _batismo Batismo do animal
	*/
	Animal(int _id, string _classe, string _cientifico, char _sexo, float _tamanho,
		string _dieta, share_ptr<PetFera::Veterinario> _vet, share_ptr<PetFera::Tratador> _trat,
		string _batismo);
	
	/**
	* @brief Destrutor padrão
	*/
	~Animal();

	/**
	* @brief	 Método que extrai o id do animal
	* @return 	 id do animal
	*/
	int get_Id();

	/**
	* @brief	Altera o id do animal
	* @param	_id Id do Animal
	* @return 	Não retorna valor
	*/	
	void set_Id(int _id);

	/**
	* @brief	 Método que extrai o classe do animal
	* @return 	 classe do animal
	*/
	string get_Classe();

	/**
	* @brief	Altera a classe do animal
	* @param	_classe Classe do Animal
	* @return 	Não retorna valor
	*/	
	void set_Classe(string _classe);

	/**
	* @brief	 Método que extrai o nome cientifico do animal
	* @return 	 nome cientifico do animal
	*/
	string get_Cientifico();

	/**
	* @brief	Altera o nome cientifico do animal
	* @param	_cientifico Cientifico do Animal
	* @return 	Não retorna valor
	*/
	void set_Cientifico(string _cientifico);

	/**
	* @brief	 Método que extrai o sexo do animal
	* @return 	 sexo do animal
	*/
	char get_Sexo();

	/**
	* @brief	Altera o sexo do animal
	* @param	_sexo Sexo do Animal
	* @return 	Não retorna valor
	*/
	void set_Sexo(char _sexo);

	/**
	* @brief	 Método que extrai o tamanho do animal
	* @return 	 tamanho do animal
	*/
	float get_Tamanho();

	/**
	* @brief	Altera o tamanho do animal
	* @param	_tamanho Tamanho do Animal
	* @return 	Não retorna valor
	*/
	void set_Tamanho(float _tamanho);

	/**
	* @brief	 Método que extrai a dieta do animal
	* @return 	 dieta do animal
	*/
	string get_Dieta();

	/**
	* @brief	Altera a dieta do animal
	* @param	_dieta Dieta do Animal
	* @return 	Não retorna valor
	*/
	void set_Dieta(string _dieta);

	/**
	* @brief	 
	* @return 	 
	*/
	share_ptr<PetFera::Veterinario> get_Veterinario();

	/**
	* @brief	 
	* @return 	 
	*/
	void set_Veterinario(share_ptr<PetFera::Veterinario> _vet);

	/**
	* @brief	 
	* @return 	 
	*/
	share_ptr<PetFera::Tratador> get_Tratador();

	/**
	* @brief	 
	* @return 	 
	*/
	void set_Tratador(share_ptr<PetFera::Tratador> _trat);

	/**
	* @brief	 Método que extrai o nome de batismo do animal
	* @return 	 nome de batismo do animal
	*/
	string get_Batismo();

	/**
	* @brief	Altera o nome de batismo do animal
	* @param	_batismo Nome de batismo do Animal
	* @return 	Não retorna valor
	*/
	void set_Batismo(string _batismo);


protected:
	int id;
	string classe;
	string nome;
	string cientifico;
	char sexo;
	float tamanho;
	string dieta;
	share_ptr<PetFera::Veterinario> veterinario;
	share_ptr<PetFera::Tratador> tratador;
	string batismo;
	
};


#endif