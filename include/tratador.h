/**
* @file 	tratador.h
* @brief    Arquivo cabeçalho contendo as definições e membros de tratador
* @author   Joicy Oliveira  (joiicyoliv@gmail.com)
* @author   William Correia (will.correia.lima@gmail.com)
* @since    04/07/2018
* @date     04/07/2018
*/

#ifndef _TRATADOR_H_
#define _TRATADOR_H_

#include "funcionario.h"

/**
* @brief Classe Tratador, derivada de Funcionario
*/
class Tratador: public Funcionario{
public:

	/**
	* @brief Construtor paramatrizado
	* @param _id Id do tratador
	* @param _nome Nome do tratador
	* @param _cpf Cpf do tratador
	* @param _idade Idade do tratador
	* @param _tipo_sanguineo Tipo Sanguineo do tratador
	* @param _fatorRH Fator RH do tratador
	* @param _especialidade Especialidade do tratador
	*/
	Tratador(int _id, string _nome, string _cpf, short _idade, short _tipo_sanguineo, 
		char _fatorRH, string _especialidade);
	Tratador(const Tratador &f);
	Tratador();
	
	/**
	* @brief Destrutor padrão
	*/
	~Tratador();

	void print(std::ostream &);
	//void print();
	
};

#endif