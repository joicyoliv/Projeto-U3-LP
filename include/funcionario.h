/**
* @file 	funcionario.h
* @brief    Arquivo cabeçalho contendo as definições e membros de funcionario
* @author   Joicy Oliveira  (joiicyoliv@gmail.com)
* @author   William Correia (will.correia.lima@gmail.com)
* @since    04/07/2018
* @date     04/07/2018
*/

#ifndef _FUNCIONARIO_H_
#define _FUNCIONARIO_H_

#include <iostream>
#include <string>
using namespace std;



/**
* @brief Classe Funcionario
*/
class Funcionario
{
public:

	/**
	* @brief Construtor paramatrizado
	* @param _id Id do funcionario
	* @param _nome Nome do funcionario
	* @param _cpf Cpf do funcionario
	* @param _idade Idade do funcionario
	* @param _tipo_sanguineo Tipo Sanguineo do funcionario
	* @param _fatorRH Fator RH do funcionario
	* @param _especialidade Especialidade do funcionario
	*/
	Funcionario(int _id, string _nome, string _cpf, short _idade, short _tipo_sanguineo, 
		char _fatorRH, string _especialidade);

	/**
	* @brief Construtor cópia de Funcionario
	* @param Funcionario
	*/
	Funcionario( const Funcionario &);

	/**
	* @brief Construtor padrão
	*/
	Funcionario();

	/**
	* @brief Destrutor padrão
	*/
	~Funcionario();

	/**
	* @brief	 Método que extrai o id do funcionario
	* @return 	 id do funcionario
	*/
	int get_Id();

	/**
	* @brief	Altera o id do funcionario
	* @param	_id Id do funcionario
	* @return 	Não retorna valor
	*/
	void set_Id(int _id); 
	
	/**
	* @brief	 Método que extrai o nome do funcionario
	* @return 	 nome do funcionario
	*/
	string get_Nome();

	/**
	* @brief	Altera o nome do funcionario
	* @param	_nome Nome do funcionario
	* @return 	Não retorna valor
	*/
	void set_Nome(string _nome);

	/**
	* @brief	 Método que extrai o cpf do funcionario
	* @return 	 cpf do funcionario
	*/
	string get_Cpf();

	/**
	* @brief	Altera o cpf do funcionario
	* @param	_cpf Cpf do funcionario
	* @return 	Não retorna valor
	*/
	void set_Cpf(string _cpf);

	/**
	* @brief	 Método que extrai a idade do funcionario
	* @return 	 idade do funcionario
	*/
	short get_Idade();

	/**
	* @brief	Altera a idade do funcionario
	* @param	_idade Idade do funcionario
	* @return 	Não retorna valor
	*/
	void set_Idade(short _idade);

	/**
	* @brief	 Método que extrai o tipo sanguineo do funcionario
	* @return 	 tipo sanguineo do funcionario
	*/
	short get_Tipo_Sanguineo();

	/**
	* @brief	Altera o tipo sanguineo do funcionario
	* @param	_tipo_sanguineo Tipo sanguineo do funcionario
	* @return 	Não retorna valor
	*/
	void set_Tipo_Sanguineo(short _tipo_sanguineo);

	/**
	* @brief	 Método que extrai o fatorRH do funcionario
	* @return 	 fatorRH do funcionario
	*/
	char get_FatorRH();

	/**
	* @brief	Altera o fatorRH do funcionario
	* @param	_fatorRH fatorRH do funcionario
	* @return 	Não retorna valor
	*/
	void set_FatorRH(char _fatorRH);

	/**
	* @brief	 Método que extrai a especialidade do funcionario
	* @return 	 especialidade do funcionario
	*/
	string get_Especialidade();

	/**
	* @brief	Altera a especialidade do funcionario
	* @param	_especialidade Especialidade do funcionario
	* @return 	Não retorna valor
	*/
	void set_Especialidade(string _especialidade);


	/**
	* @brief Métoro virtual puro
	*/
	virtual void print(std::ostream &)=0;



protected:
	int id;
	string nome;
	string cpf;
	short idade;
	short tipo_sanguineo;
	char fatorRH;
	string especialidade;

};





#endif

