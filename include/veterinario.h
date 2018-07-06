/**
* @file 	veterinario.h
* @brief    Arquivo cabeçalho contendo as definições e membros de veterinario
* @author   Joicy Oliveira  (joiicyoliv@gmail.com)
* @author   William Correia (will.correia.lima@gmail.com)
* @since    04/07/2018
* @date     04/07/2018
*/

#ifndef _VETERINARIO_H_
#define _VETERINARIO_H_
#include "funcionario.h"

/**
* @brief Classe Veterinario, derivada de Funcionario
*/
class Veterinario: public Funcionario{
public:

	/**
	* @brief Construtor paramatrizado
	* @param _id Id do veterinario
	* @param _nome Nome do veterinario
	* @param _cpf Cpf do veterinario
	* @param _idade Idade do veterinario
	* @param _tipo_sanguineo Tipo Sanguineo do veterinario
	* @param _fatorRH Fator RH do veterinario
	* @param _especialidade Especialidade do veterinario
	*/
	Veterinario(int _id, string _nome, string _cpf, short _idade, short _tipo_sanguineo, 
		char _fatorRH, string _especialidade);
	Veterinario(const Veterinario &f);
	Veterinario();
	
	/**
	* @brief Destrutor padrão
	*/
	~Veterinario();

	void print(std::ostream &);
	//void print();
	
};


#endif