#include "animal.h"

#include <string>

Animal::Animal(int _id, string _classe, string _cientifico, char _sexo, float _tamanho,
		string _dieta, share_ptr<PetFera::Veterinario> _vet, share_ptr<PetFera::Tratador> _trat,
		string _batismo){

		id = _id;
		classe = _classe;
		cientifico = _cientifico;
		sexo = _sexo;
		tamanho = _tamanho;
		dieta = _dieta;      
		veterinario = _vet;
		tratador = _trat;
		batismo = _batismo;
}

Animal::~Animal(){}

int 
Animal::get_Id(){
	return id;
}


void 
Animal::set_Id(int _id){
	id = _id;
}

string 
Animal::get_Classe(){
	return classe;
}

void 
Animal::set_Classe(string _classe){
	classe = _classe;
}

string 
Animal::get_Cientifico(){
	return cientifico;
}

void 
Animal::set_Cientifico(string _cientifico){
	cientifico = _cientifico;
}

char 
Animal::get_Sexo(){
	return sexo;
}
	
void 
Animal::set_Sexo(char _sexo){
	sexo = _sexo;
}

float 
Animal::get_Tamanho(){
	return tamanho;
}

void 
Animal::set_Tamanho(float _tamanho){
	tamanho = _tamanho;
}

string 
Animal::get_Dieta(){
	return  dieta;
}

void 
Animal::set_Dieta(string _dieta){
	dieta = _dieta;
}

share_ptr<PetFera::Veterinario> 
Animal::get_Veterinario(){
	return veterinario;
}
	
void 
Animal::set_Veterinario(share_ptr<PetFera::Veterinario> _vet){
	veterinario = _vet;
}

share_ptr<PetFera::Tratador> 
Animal::get_Tratador(){
	return tratador;
}

void 
Animal::set_Tratador(share_ptr<PetFera::Tratador> _trat){
	tratador = _trat;
}

string 
Animal::get_Batismo(){
	return batismo;
}

void 
Animal::set_Batismo(string _batismo){
	batismo = _batismo;
}