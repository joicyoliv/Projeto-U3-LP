/**
* @file 	exotica.h
* @brief    Arquivo cabeçalho contendo as definições e membros de animal exotico
* @author   Joicy Oliveira  (joiicyoliv@gmail.com)
* @author   William Correia (will.correia.lima@gmail.com)
* @since    04/07/2018
* @date     04/07/2018
*/

#ifndef _EXOTICO_H_
#define _EXOTICO_H_

#include "animalSilvestre.h"

/**
* @brief Classe Exotica, derivada animalSilvestre
*/
class Exotico: public animalSilvestre
{
public:

	/**
	* @brief Construtor paramatrizado
	* @param _ibama Ibama
	* @param _pais_origem Pais de origem da ave exotica
	*/
	Exotico(string _ibama, string _pais_origem);

	/**
	* @brief Destrutor padrão
	*/
	~Exotico();

	/**
	* @brief	 Método que extrai o pais de origem
	* @return 	 pais de origem
	*/
	string get_Pais_origem();

	/**
	* @brief	Altera o pais de origem
	* @param	_pais_origem o pais de origem do animal exotico
	* @return 	Não retorna valor
	*/
	void set_Pais_origem(string _pais_origem);
	
protected:
	string pais_origem;
};

#endif