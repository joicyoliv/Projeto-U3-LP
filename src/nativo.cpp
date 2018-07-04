/**
* @file 	nativo.h
* @brief     Arquivo de corpo contendo as implementações dos membros de animal nativo
* @author   Joicy Oliveira  (joiicyoliv@gmail.com)
* @author   William Correia (will.correia.lima@gmail.com)
* @since    04/07/2018
* @date     04/07/2018
*/

#include "nativo.h"


/**
* @brief Construtor paramatrizado
* @param _ibama Ibama
* @param _uf_origem Pais de origem da ave nativa
* @param _autorizacao Autorizacao
*/
Nativo::Nativo(string _ibama, string _uf_origem, string _autorizacao){
	ibama = _ibama;
	uf_origem = _uf_origem;
	autorizacao = _autorizacao;
}
	
Nativo::Nativo(const Nativo &f){
	this->ibama = f.ibama;
	this->uf_origem = f.uf_origem;
	this->autorizacao = f.autorizacao;
}
Nativo::Nativo(){}
Nativo::~Nativo(){}

/**
* @brief	 Método que extrai o uf de origem do mamifero
* @return 	 uf de origem de mamifero
*/
string 
Nativo::get_Uf_origem(){
	return uf_origem;
}

/**
* @brief	Altera o uf de origem do mamifero
* @param	_uf_origem uf de origem do mamifero
* @return 	Não retorna valor
*/
void 
Nativo::set_Uf_origem(string _uf_origem){
	uf_origem = _uf_origem;
}

/**
* @brief	 Método que extrai a autorizacao do mamifero
* @return 	 autorizacao do mamifero
*/
string 
Nativo::get_Autorizacao(){
	return autorizacao;
}

/**
* @brief	Altera a autorizacao do mamifero
* @param	_autorizacao a autorizacao do mamifero
* @return 	Não retorna valor
*/	
void 
Nativo::set_Autorizacao(string _autorizacao){
	autorizacao = _autorizacao;
}