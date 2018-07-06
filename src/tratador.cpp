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

Tratador::Tratador(const Tratador &f){
	this->id = f.id;
	this->nome = f.nome;
	this->cpf = f.cpf;
	this->idade = f.idade;
	this->tipo_sanguineo = f.tipo_sanguineo;
	this->fatorRH = f.fatorRH;
	this->especialidade = f.especialidade;

}

Tratador::Tratador(){

}

/**
* @brief Destrutor padrão
*/
Tratador::~Tratador(){}


void Tratador::print(std::ostream & o){
	o<< "ID : " << id << endl
	<<"Nome : "<<nome << endl
	<<"CPF : "<< cpf << endl
	<<"Idade : "<<idade << endl
	<<"Tipo sanguineo : "<< tipo_sanguineo << endl
	<<"Fator RH : "<< fatorRH << endl
	<<"Especialidade : "<< especialidade << endl;

}