/**
* @file 	anfibio.cpp
* @brief    Arquivo de corpo contendo as implementações dos membros de anfibio
* @author   Joicy Oliveira  (joiicyoliv@gmail.com)
* @author   William Correia (will.correia.lima@gmail.com)
* @since    04/07/2018
* @date     04/07/2018
*/

#include "anfibio.h"


/**
* @brief Construtor paramatrizado
* @param _id Id do anfibio
* @param _classe Classe do anfibio
* @param _cientifico Cientifico do anfibio
* @param _sexo Sexo do anfibio
* @param _tamanho Samanho do anfibio
* @param _dieta Dieta do anfibio
* @param _vet Veterinario do anfibio
* @param _trat Tratador do anfibio
* @param _batismo Batismo do anfibio
* @param _total_mudas Total de mudas do anfibio
* @param _ultima_muda Ultima muda do anfibio
*/
Anfibio::Anfibio(int _id, string _nome, string _cientifico, char _sexo, float _tamanho,
		string _dieta, shared_ptr<Veterinario>  _vet, shared_ptr<Tratador>  _trat,
		string _batismo, int _total_mudas, string _ultima_muda){

	id = _id;
	classe = "Amphibia";
	nome = _nome;
	cientifico = _cientifico;
	sexo = _sexo;
	tamanho = _tamanho;
	dieta = _dieta;      
	veterinario = _vet;
	tratador = _trat;
	batismo = _batismo;
	total_mudas = _total_mudas;
	ultima_muda = _ultima_muda;
}

Anfibio::Anfibio(){
	
}

Anfibio::Anfibio(const Anfibio &f){

	this->id = f.id;
	this->classe = "Amphibia";
	this->nome = f.nome;
	this->cientifico = f.cientifico;
	this->sexo = f.sexo;
	this->tamanho = f.tamanho;
	this->dieta = f.dieta;      
	this->veterinario = f.veterinario;
	this->tratador = f.tratador;
	this->batismo = f.batismo;
	this->total_mudas = f.total_mudas;
	this->ultima_muda = f.ultima_muda;
}

/**
* @brief Destrutor padrão
*/
Anfibio::~Anfibio(){}

/**
* @brief	 Método que extrai o total de mudas do anfibio
* @return 	 total de mudas do anfibio
*/
int 
Anfibio::get_Total_mudas(){
	return total_mudas;
}

/**
* @brief	Altera o total de mudas do anfibio
* @param	_total_mudas Total de mudas do anfibio
* @return 	Não retorna valor
*/
void 
Anfibio::set_Total_mudas(int _total_mudas){
	total_mudas = _total_mudas;
}

/**
* @brief	 Método que extrai o ultima de muda do anfibio
* @return 	 ultima muda do anfibio
*/
string 
Anfibio::get_Ultima_muda(){
	return ultima_muda;
}

/**
* @brief	Altera a ultima muda do anfibio
* @param	_ultima_muda Ultima muda do anfibio
* @return 	Não retorna valor
*/
void 
Anfibio::set_Ultima_muda(string _ultima_muda){
	ultima_muda = _ultima_muda;
}


/**
* @brief	Método para imprimir dados de anfibio
* @return 	Não retorna valor
*/
// std::ostream& Anfibio::print(ostream &o)const{

// 	return o<<"---------------------------------------------------------------------" << endl
// 	<<"Anfibio : " << endl
// 	<<"ID : " << id << endl
// 	<< "Classe : " << classe << endl
// 	<< "nome :" << nome  << endl
// 	<< "cientifico : " << cientifico  << endl
// 	<< "sexo : " << sexo  << endl
// 	<< "tamanho : " << tamanho  << endl
// 	<< "dieta : "<< dieta  << endl 
// 	<< "batismo : "<< batismo << endl
// 	<< "total_mudas : "<< total_mudas << endl
// 	<< "ultima_muda : "<< ultima_muda << endl <<endl

// 	<< "Veterinario : " << endl
// 	<<"ID : " << veterinario->get_Id() << endl
// 	<<"Nome : "<<veterinario->get_Nome() << endl
// 	<<"CPF : "<< veterinario->get_Cpf() << endl
// 	<<"Idade : "<<veterinario->get_Idade() << endl
// 	<<"Tipo sanguineo : "<< veterinario->get_Tipo_Sanguineo() << endl
// 	<<"Fator RH : "<< veterinario->get_FatorRH() << endl
// 	<<"Especialidade : "<< veterinario->get_Especialidade() << endl << endl


// 	<< "Tratador " << endl
// 	<<"ID : " << tratador->get_Id() << endl
// 	<<"Nome : "<<tratador->get_Nome() << endl
// 	<<"CPF : "<< tratador->get_Cpf() << endl
// 	<<"Idade : "<<tratador->get_Idade() << endl
// 	<<"Tipo sanguineo : "<< tratador->get_Tipo_Sanguineo() << endl
// 	<<"Fator RH : "<< tratador->get_FatorRH() << endl
// 	<<"Especialidade : "<< tratador->get_Especialidade() << endl
// 	<<"---------------------------------------------------------------------"<<endl;

// }

/**
* @brief	Método para verificar se os anfibios são iguais
* @param	Anfibio
* @return 	True para verdadeiro e False para falso
*/
bool Anfibio::operator==( Anfibio const &t){
	if( this->id == t.id and
	this->classe == t.classe and
	this->nome == t.nome and
	this->cientifico == t.cientifico and
	this->sexo == t.sexo and
	this->tamanho == t.tamanho and
	this->dieta == t.dieta and
	*veterinario == *(t.veterinario) and
	*tratador == *(t.tratador) and
	this->batismo == t.batismo and

	this->total_mudas == t.total_mudas and
	this->ultima_muda == t.ultima_muda){
		return true;
	}
	return false;
}





