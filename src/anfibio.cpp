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
Anfibio::Anfibio(int _id, string _classe, string _cientifico, char _sexo, float _tamanho,
		string _dieta, shared_ptr<Veterinario> _vet, shared_ptr<Tratador> _trat,
		string _batismo, int _total_mudas, string _ultima_muda){

	id = _id;
	classe = _classe;
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

// Anfibio::Anfibio(const Anfibio &f){
// 	this->id = f.id;
// 	this->classe = f.classe;
// 	this->cientifico = f.cientifico;
// 	this->sexo = f.sexo;
// 	this->tamanho = f.tamanho;
// 	this->dieta = f.dieta;      
// 	this->veterinario = f.vet;
// 	this->tratador = f.trat;
// 	this->batismo = f.batismo;
// 	this->total_mudas = f.total_mudas;
// 	this->ultima_muda = f.ultima_muda;
// }
// Anfibio::Anfibio(){}
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