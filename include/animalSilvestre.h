/**
* @file 	animalSilvestre.h
* @brief    Arquivo cabeçalho contendo as definições e membros de animal silvestre
* @author   Joicy Oliveira  (joiicyoliv@gmail.com)
* @author   William Correia (will.correia.lima@gmail.com)
* @since    04/07/2018
* @date     04/07/2018
*/

#ifndef _ANIMAL_SILVESTRE_H
#define _ANIMAL_SILVESTRE_H

#include <string>
using namespace std;

/**
* @brief Classe Animal Silvestre
*/
class AnimalSilvestre
{
public:

	/**
	* @brief Construtor paramatrizado
	* @param _ibama Ibama
	*/
	AnimalSilvestre(string _ibama);
	
	/**
	* @brief Destrutor padrão
	*/
	~AnimalSilvestre();

	/**
	* @brief	 Método que extrai o ibama
	* @return 	 ibama
	*/
	string get_Ibama();

	/**
	* @brief	Altera o ibama
	* @param	_ibama Ibama
	* @return 	Não retorna valor
	*/
	void set_Ibama(string _ibama);
	
protected:
	string ibama;
	
};


#endif