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

	void set_Nome( string _nome){
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
share_ptr<PetFera::Veterinario> 
Animal::get_Veterinario(){
	return veterinario;
}

/**
* @brief	 
* @return 	 
*/	
void 
Animal::set_Veterinario(share_ptr<PetFera::Veterinario> _vet){
	veterinario = _vet;
}

/**
* @brief	 
* @return 	 
*/
share_ptr<PetFera::Tratador> 
Animal::get_Tratador(){
	return tratador;
}

/**
* @brief	 
* @return 	 
*/
void 
Animal::set_Tratador(share_ptr<PetFera::Tratador> _trat){
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
	if( this->id == t.get_Id(),
	this->classe == t.get_Classe(),
	this->nome == t.get_Nome(),
	this->cientifico == t.get_Cientifico(),
	this->sexo == t.get_Sexo(),
	this->tamanho == t.get_Tamanho(),
	this->dieta == t.get_Dieta(),
	this->veterinario == t.get_Veterinario(),
	this->tratador == t.get_Tratador(),
	this->batismo == t.get_Batismo())
}