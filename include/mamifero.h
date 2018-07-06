/**
* @file 	mamifero.h
* @brief    Arquivo cabeçalho contendo as definições e membros de mamifero
* @author   Joicy Oliveira  (joiicyoliv@gmail.com)
* @author   William Correia (will.correia.lima@gmail.com)
* @since    04/07/2018
* @date     04/07/2018
*/

#ifndef _MAMIFERO_H_
#define _MAMIFERO_H_

#include "animal.h"

/**
* @brief Classe Mamifero, derivada de Animal
*/
class Mamifero: public Animal{
public:

	/**
	* @brief Construtor paramatrizado
	* @param _id Id do mamifero
	* @param _classe Classe do mamifero
	* @param _cientifico Cientifico do mamifero
	* @param _sexo Sexo do mamifero
	* @param _tamanho Samanho do mamifero
	* @param _dieta Dieta do mamifero
	* @param _vet Veterinario do mamifero
	* @param _trat Tratador do mamifero
	* @param _batismo Batismo do mamifero
	* @param _cor_pelo Cor do pelo do mamifero
	*/
	Mamifero(int _id, string _nome, string _cientifico, char _sexo, float _tamanho,
		string _dieta, shared_ptr<Veterinario> _vet, shared_ptr<Tratador> _trat,
		string _batismo, string _cor_pelo);

	/**
	* @brief Destrutor padrão
	*/
	~Mamifero();

	/**
	* @brief	 Método que extrai a cor do pelo do mamifero
	* @return 	 cor do pelo do mamifero
	*/
	string get_Cor_pelo();

	/**
	* @brief	Altera a cor do pelo do mamifero
	* @param	_cor_pelo Cor do pelo do mamifero
	* @return 	Não retorna valor
	*/	
	void set_Cor_pelo(string _cor_pelo);

	/**
	* @brief	Método para imprimir os dados de animal Mamifero
	* @return 	Não retorna valor
	*/	
	void print(std::ostream &);
	
protected:
	string cor_pelo;
};

#endif