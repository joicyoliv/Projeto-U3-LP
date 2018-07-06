/**
* @file 	exotica.cpp
* @brief    Arquivo de corpo contendo as implementações dos membros de animal exotica
* @author   Joicy Oliveira  (joiicyoliv@gmail.com)
* @author   William Correia (will.correia.lima@gmail.com)
* @since    04/07/2018
* @date     04/07/2018
*/

#include "exotico.h"

/**
* @brief Construtor paramatrizado
* @param _ibama Ibama
* @param _pais_origem Pais de origem da ave exotica
*/
Exotico::Exotico(string _ibama, string _pais_origem){
	ibama = _ibama;
	pais_origem = _pais_origem;
}

/**
* @brief Construtor cópia de animal exotico
* @param _Exotico
*/
Exotico::Exotico(const Exotico &f){
	this->ibama = f.ibama;
	this->pais_origem = f.pais_origem;
}

/**
* @brief Construtor padrão
*/
Exotico::Exotico(){

}

/**
* @brief Destrutor padrão
*/
Exotico::~Exotico(){}

/**
* @brief	 Método que extrai o pais de origem
* @return 	 pais de origem
*/
string 
Exotico::get_Pais_origem(){
	return pais_origem;
}

/**
* @brief	Altera o pais de origem
* @param	_pais_origem o pais de origem do animal exotico
* @return 	Não retorna valor
*/
void 
Exotico::set_Pais_origem(string _pais_origem){
	pais_origem = _pais_origem;
}