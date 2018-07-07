/**
* @file 	tratador.h
* @brief    Arquivo de corpo contendo as implementações  dos membros de tratador
* @author   Joicy Oliveira  (joiicyoliv@gmail.com)
* @author   William Correia (will.correia.lima@gmail.com)
* @since    04/07/2018
* @date     04/07/2018
*/

#include "tratador.h"

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
Tratador::Tratador(int _id, string _nome, string _cpf, short _idade, short _tipo_sanguineo, 
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
* @brief	 Construtor cópia de Tratador
* @param Tratador
*/
Tratador::Tratador(const Tratador &f){
	this->id = f.id;
	this->nome = f.nome;
	this->cpf = f.cpf;
	this->idade = f.idade;
	this->tipo_sanguineo = f.tipo_sanguineo;
	this->fatorRH = f.fatorRH;
	this->especialidade = f.especialidade;

}


/**
* @brief	 Construtor padrão
*/
Tratador::Tratador(){

}

/**
* @brief Destrutor padrão
*/
Tratador::~Tratador(){}


/**
* @brief	 Método que imprimi os dados de um Tratador
*/
void Tratador::print(std::ostream & o ){
	o<< "ID : " << id << endl
	<<"Nome : "<<nome << endl
	<<"CPF : "<< cpf << endl
	<<"Idade : "<<idade << endl
	<<"Tipo sanguineo : "<< tipo_sanguineo << endl
	<<"Fator RH : "<< fatorRH << endl
	<<"Especialidade : "<< especialidade << endl;

}

/**
* @brief	Método para verificar se os Tratador são iguais
* @param	Tratador
* @return 	True para verdadeiro e False para falso
*/
bool Tratador::operator==( Tratador const &t){
	if( this->id == t.id and
	this->nome == t.nome and
	this->cpf == t.cpf and
	this->idade == t.idade and
	this->tipo_sanguineo == t.tipo_sanguineo and
	this->fatorRH == t.fatorRH and
	this->especialidade == t.especialidade){
		return true;
	}
	return false;
}
