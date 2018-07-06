/**
* @file 	veterinario.h
* @brief    Arquivo de corpo contendo as implementações  dos membros de veterinario
* @author   Joicy Oliveira  (joiicyoliv@gmail.com)
* @author   William Correia (will.correia.lima@gmail.com)
* @since    04/07/2018
* @date     04/07/2018
*/

#include "veterinario.h"

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
Veterinario::Veterinario(int _id, string _nome, string _cpf, short _idade, short _tipo_sanguineo, char _fatorRH, 
	string _especialidade){

	id = _id;
	nome = _nome;
	cpf = _cpf;
	idade = _idade;
	tipo_sanguineo = _tipo_sanguineo;
	fatorRH = _fatorRH;
	especialidade = _especialidade;
}


Veterinario::Veterinario(const Veterinario &f){
	this->id = f.id;
	this->nome = f.nome;
	this->cpf = f.cpf;
	this->idade = f.idade;
	this->tipo_sanguineo = f.tipo_sanguineo;
	this->fatorRH = f.fatorRH;
	this->especialidade = f.especialidade;
}

Veterinario::Veterinario(){

}

/**
* @brief Destrutor padrão
*/
Veterinario::~Veterinario(){}




void Veterinario::print(std::ostream & o ){
	o<< "ID : " << id << 	endl
	<<"Nome : "<<nome << endl
	<<"CPF : "<< cpf << endl
	<<"Idade : "<<idade << endl
	<<"Tipo sanguineo : "<< tipo_sanguineo << endl
	<<"Fator RH : "<< fatorRH << endl
	<<"Especialidade : "<< especialidade << endl;

}


// void Veterinario::print(){
// 	cout< "ID : " << id << endl
// 	<<"Nome : "<<nome << endl
// 	<<"CPF : "<< cpf << endl
// 	<<"Idade : "<<idade << endl
// 	<<"Tipo sanguineo : "<< tipo_sanguineo << endl
// 	<<"Fator RH : "<< fatorRH << endl
// 	<<"Especialidade : "<< especialidade << endl;
// }