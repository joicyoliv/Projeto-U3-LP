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
	

	/**
	* @brief	 Construtor cópia de Tratador
	* @param Tratador
	*/
	Tratador(const Tratador &f);
	
	/**
	* @brief	 Construtor padrão
	*/
	Tratador();
	
	/**
	* @brief Destrutor padrão
	*/
	~Tratador();

	/**
	* @brief	 Método que imprimi os dados de um TRatador
	*/
	std::ostream& print(std::ostream& os) const;

	/**
	* @brief	Método para verificar se os Tratador são iguais
	* @param	Tratador
	* @return 	True para verdadeiro e False para falso
	*/
	bool operator==( Tratador const &t);
	
	
};

#endif