/**
* @file 	funcionario.h
* @brief    Arquivo de corpo contendo as implementações  dos membros de funcionario
* @author   Joicy Oliveira  (joiicyoliv@gmail.com)
* @author   William Correia (will.correia.lima@gmail.com)
* @since    04/07/2018
* @date     04/07/2018
*/

#include "funcionario.h"

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
Funcionario::Funcionario(int _id, string _nome, string _cpf, short _idade, short _tipo_sanguineo, 
		char _fatorRH, string _especialidade){


	id = _id;
	nome = _nome;
	cpf = _cpf;
	idade = _idade;
	tipo_sanguineo = _tipo_sanguineo;
	fatorRH = _fatorRH;
	especialidade = _especialidade;
}

/**
* @brief Destrutor padrão
*/
Funcionario::~Funcionario(){}


/**
* @brief	 Método que extrai o id do funcionario
* @return 	 id do funcionario
*/
int 
Funcionario::get_Id(){
	return id;
}

/**
* @brief	Altera o id do funcionario
* @param	_id Id do funcionario
* @return 	Não retorna valor
*/
void 
Funcionario::set_Id(int _id){
	id = _id;
}
	
/**
* @brief	 Método que extrai o nome do funcionario
* @return 	 nome do funcionario
*/
string 
Funcionario::get_Nome(){
	return nome;
}

/**
* @brief	Altera o nome do funcionario
* @param	_nome Nome do funcionario
* @return 	Não retorna valor
*/
void 
Funcionario::set_Nome(string _nome){
	nome = _nome;
}

/**
* @brief	 Método que extrai o cpf do funcionario
* @return 	 cpf do funcionario
*/
string 
Funcionario::get_Cpf(){
	return cpf;
}

/**
* @brief	Altera o cpf do funcionario
* @param	_cpf Cpf do funcionario
* @return 	Não retorna valor
*/	
void 
Funcionario::set_Cpf(string _cpf){
	cpf = _cpf;
}

/**
* @brief	 Método que extrai a idade do funcionario
* @return 	 idade do funcionario
*/
short 
Funcionario::get_Idade(){
	return idade;
}

/**
* @brief	Altera a idade do funcionario
* @param	_idade Idade do funcionario
* @return 	Não retorna valor
*/
void 
Funcionario::set_Idade(short _idade){
	idade = _idade;
}

/**
* @brief	 Método que extrai o tipo sanguineo do funcionario
* @return 	 tipo sanguineo do funcionario
*/
short 
Funcionario::get_Tipo_Sanguineo(){
	return tipo_sanguineo;
}

/**
* @brief	Altera o tipo sanguineo do funcionario
* @param	_tipo_sanguineo Tipo sanguineo do funcionario
* @return 	Não retorna valor
*/
void 
Funcionario::set_Tipo_Sanguineo(short _tipo_sanguineo){
	tipo_sanguineo = _tipo_sanguineo;
}

/**
* @brief	 Método que extrai o fatorRH do funcionario
* @return 	 fatorRH do funcionario
*/
char 
Funcionario::get_FatorRH(){
	return fatorRH;
}

/**
* @brief	Altera o fatorRH do funcionario
* @param	_fatorRH fatorRH do funcionario
* @return 	Não retorna valor
*/
void 
Funcionario::set_FatorRH(char _fatorRH){
	fatorRH = _fatorRH;
}

/**
* @brief	 Método que extrai a especialidade do funcionario
* @return 	 especialidade do funcionario
*/
string 
Funcionario::get_Especialidade(){
	return especialidade;
}

/**
* @brief	Altera a especialidade do funcionario
* @param	_especialidade Especialidade do funcionario
* @return 	Não retorna valor
*/
void 
Funcionario::set_Especialidade(string _especialidade){
	especialidade = _especialidade;
}

