/**
* @file 	animal.cpp
* @brief    Arquivo de corpo contendo as implementações dos membros de animal
* @author   Joicy Oliveira  (joiicyoliv@gmail.com)
* @author   William Correia (will.correia.lima@gmail.com)
* @since    04/07/2018
* @date     04/07/2018
*/

#include "animal.h"

#include <string>
#include <iostream>
using namespace std;

/**
* @brief Construtor paramatrizado
* @param _id Id do animal
* @param _classe Classe do animal
* @param _cientifico Cientifico do animal
* @param _sexo Sexo do animal
* @param _tamanho Samanho do animal
* @param _dieta Dieta do animal
* @param _vet Veterinario do animal
* @param _trat Tratador do animal
* @param _batismo Batismo do animal
*/
Animal::Animal(int _id, string _nome, string _cientifico, char _sexo, float _tamanho,
		string _dieta, shared_ptr<Veterinario> & _vet, shared_ptr<Tratador> & _trat,
		string _batismo){


		id = _id;
		nome = _nome;
		cientifico = _cientifico;
		sexo = _sexo;
		tamanho = _tamanho;
		dieta = _dieta;      
		veterinario = _vet;
		tratador = _trat;
		batismo = _batismo;
}

Animal::Animal(const Animal &f){

		this->id = f.id;
		this->nome = f.nome;
		this->cientifico = f.cientifico;
		this->sexo = f.sexo;
		this->tamanho = f.tamanho;
		this->dieta = f.dieta;      
		this->veterinario = f.veterinario;
		this->tratador = f.tratador;
		this->batismo = f.batismo;

}

Animal::Animal(){

}

/**
* @brief Destrutor padrão
*/
Animal::~Animal(){}

/**
* @brief	 Método que extrai o id do animal
* @return 	 id do animal
*/
int 
Animal::get_Id(){
	return id;
}

/**
* @brief	Altera o id do animal
* @param	_id Id do Animal
* @return 	Não retorna valor
*/
void 
Animal::set_Id(int _id){
	id = _id;
}

/**
* @brief	 Método que extrai o classe do animal
* @return 	 classe do animal
*/
string 
Animal::get_Classe(){
	return classe;
}

/**
* @brief	Altera a classe do animal
* @param	_classe Classe do Animal
* @return 	Não retorna valor
*/
void 
Animal::set_Classe(string _classe){
	classe = _classe;
}



/**
	* @brief	 Método que extrai o nome do animal
	* @return 	 nome do animal
	*/
string Animal::get_Nome(){
	return this->nome;
}


/**
	* @brief	Altera o Nome do animal
	* @param	_nome Nome do Animal
	* @return 	Não retorna valor
	*/

	void Animal::set_Nome( string _nome){
		this->nome = _nome;
	}






/**
* @brief	 Método que extrai o nome cientifico do animal
* @return 	 nome cientifico do animal
*/
string 
Animal::get_Cientifico(){
	return cientifico;
}

/**
* @brief	Altera o nome cientifico do animal
* @param	_cientifico Cientifico do Animal
* @return 	Não retorna valor
*/
void 
Animal::set_Cientifico(string _cientifico){
	cientifico = _cientifico;
}

/**
* @brief	 Método que extrai o sexo do animal
* @return 	 sexo do animal
*/
char 
Animal::get_Sexo(){
	return sexo;
}

/**
* @brief	Altera o sexo do animal
* @param	_sexo Sexo do Animal
* @return 	Não retorna valor
*/
void 
Animal::set_Sexo(char _sexo){
	sexo = _sexo;
}

/**
* @brief	 Método que extrai o tamanho do animal
* @return 	 tamanho do animal
*/
float 
Animal::get_Tamanho(){
	return tamanho;
}

/**
* @brief	Altera o tamanho do animal
* @param	_tamanho Tamanho do Animal
* @return 	Não retorna valor
*/
void 
Animal::set_Tamanho(float _tamanho){
	tamanho = _tamanho;
}

/**
* @brief	 Método que extrai a dieta do animal
* @return 	 dieta do animal
*/
string 
Animal::get_Dieta(){
	return  dieta;
}

/**
* @brief	Altera a dieta do animal
* @param	_dieta Dieta do Animal
* @return 	Não retorna valor
*/
void 
Animal::set_Dieta(string _dieta){
	dieta = _dieta;
}

/**
* @brief	 
* @return 	 
*/
shared_ptr<Veterinario> 
Animal::get_Veterinario(){
	return veterinario;
}

/**
* @brief	 
* @return 	 
*/	
void 
Animal::set_Veterinario(shared_ptr<Veterinario> _vet){
	veterinario = _vet;
}

/**
* @brief	 
* @return 	 
*/
shared_ptr<Tratador> 
Animal::get_Tratador(){
	return tratador;
}

/**
* @brief	 
* @return 	 
*/
void 
Animal::set_Tratador(shared_ptr<Tratador> _trat){
	tratador = _trat;
}

/**
* @brief	 Método que extrai o nome de batismo do animal
* @return 	 nome de batismo do animal
*/
string 
Animal::get_Batismo(){
	return batismo;
}

/**
* @brief	Altera o nome de batismo do animal
* @param	_batismo Nome de batismo do Animal
* @return 	Não retorna valor
*/
void 
Animal::set_Batismo(string _batismo){
	batismo = _batismo;
}


bool Animal::operator==( Animal const &t){
	if( this->id == t.id and
	this->classe == t.classe and
	this->nome == t.nome and
	this->cientifico == t.cientifico and
	this->sexo == t.sexo and
	this->tamanho == t.tamanho and
	this->dieta == t.dieta and
	//this->veterinario == t.veterinario and
	//this->tratador == t.tratador and
	this->batismo == t.batismo){
		return true;
	}
	return false;
}














