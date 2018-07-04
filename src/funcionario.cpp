#include "funcionario.h"

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

Funcionario::~Funcionario(){}

int 
Funcionario::get_Id(){
	return id;
}
	
void 
Funcionario::set_Id(int _id){
	id = _id;
}
	

string 
Funcionario::get_Nome(){
	return nome;
}

void 
Funcionario::set_Nome(string _nome){
	nome = _nome;
}

string 
Funcionario::get_Cpf(){
	return cpf;
}
	
void 
Funcionario::set_Cpf(string _cpf){
	cpf = _cpf;
}

short 
Funcionario::get_Idade(){
	return idade;
}

void 
Funcionario::set_Idade(short _idade){
	idade = _idade;
}

short 
Funcionario::get_Tipo_Sanguineo(){
	return tipo_sanguineo;
}

void 
Funcionario::set_Tipo_Sanguineo(short _tipo_sanguineo){
	tipo_sanguineo = _tipo_sanguineo;
}

char 
Funcionario::get_FatorRH(){
	return fatorRH;
}

void 
Funcionario::set_FatorRH(char _fatorRH){
	fatorRH = _fatorRH;
}

string 
Funcionario::get_Especialidade(){
	return especialidade;
}

void 
Funcionario::set_Especialidade(string _especialidade){
	especialidade = _especialidade;
}

