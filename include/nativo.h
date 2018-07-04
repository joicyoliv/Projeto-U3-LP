/**
* @file 	nativa.h
* @brief    Arquivo cabeçalho contendo as definições e membros de nativa
* @author   Joicy Oliveira  (joiicyoliv@gmail.com)
* @author   William Correia (will.correia.lima@gmail.com)
* @since    04/07/2018
* @date     04/07/2018
*/

#ifndef _NATIVO_H_
#define _NATIVO_H_

#include "animalSilvestre.h"

/**
* @brief Classe Nativa, derivada AnimalSilvestre
*/
class Nativo: public AnimalSilvestre
{

public:
	/**
	* @brief Construtor paramatrizado
	* @param _ibama Ibama
	* @param _uf_origem Pais de origem da ave nativa
	* @param _autorizacao Autorizacao
	*/
	Nativo(string _ibama, string _uf_origem, string _autorizacao);
	
	Nativo(const Nativo &f);
	Nativo();

	/**
	* @brief Destrutor padrão
	*/
	~Nativo();

	/**
	* @brief	 Método que extrai o uf de origem do mamifero
	* @return 	 uf de origem de mamifero
	*/
	string get_Uf_origem();

	/**
	* @brief	Altera o uf de origem do mamifero
	* @param	_uf_origem uf de origem do mamifero
	* @return 	Não retorna valor
	*/
	void set_Uf_origem(string _uf_origem);

	/**
	* @brief	 Método que extrai a autorizacao do mamifero
	* @return 	 autorizacao do mamifero
	*/
	string get_Autorizacao();

	/**
	* @brief	Altera a autorizacao do mamifero
	* @param	_autorizacao a autorizacao do mamifero
	* @return 	Não retorna valor
	*/
	void set_Autorizacao(string _autorizacao);

protected:
	string uf_origem;
	string autorizacao;
};



#endif