/**
* @file 	animalSilvestre.cpp
* @brief    Arquivo de corpo contendo as implementações dos membros de animal silvestre
* @author   Joicy Oliveira  (joiicyoliv@gmail.com)
* @author   William Correia (will.correia.lima@gmail.com)
* @since    04/07/2018
* @date     04/07/2018
*/

#include "animalSilvestre.h"

AnimalSilvestre::AnimalSilvestre(const AnimalSilvestre &f){
	this->ibama = f.ibama;
}

AnimalSilvestre::AnimalSilvestre(){}

/**
* @brief Construtor paramatrizado
* @param _ibama Ibama
*/
AnimalSilvestre::AnimalSilvestre(string _ibama){
	ibama = _ibama;
}
	
/**
* @brief Destrutor padrão
*/
AnimalSilvestre::~AnimalSilvestre(){}

/**
* @brief	 Método que extrai o ibama
* @return 	 ibama
*/
string 
AnimalSilvestre::get_Ibama(){
	return ibama;
}

/**
* @brief	Altera o ibama
* @param	_ibama Ibama
* @return 	Não retorna valor
*/
void 
AnimalSilvestre::set_Ibama(string _ibama){
	ibama = _ibama;
}