/**
* @file 	ave.cpp
* @brief    Arquivo de corpo contendo as implementações dos membros de ave
* @author   Joicy Oliveira  (joiicyoliv@gmail.com)
* @author   William Correia (will.correia.lima@gmail.com)
* @since    04/07/2018
* @date     04/07/2018
*/

#include "ave.h"

/**
* @brief Construtor paramatrizado
* @param _id Id do ave
* @param _classe Classe do ave
* @param _cientifico Cientifico do ave
* @param _sexo Sexo do ave
* @param _tamanho Samanho do ave
* @param _dieta Dieta do ave
* @param _vet Veterinario do ave
* @param _trat Tratador do ave
* @param _batismo Batismo do ave
* @param _tamanho_bico Envergadura do ave
* @param _envergadura Envergadura do ave
*/
Ave::Ave(int _id, string _classe, string _cientifico, char _sexo, float _tamanho,
		string _dieta, shared_ptr<Veterinario> _vet, shared_ptr<Tratador> _trat,
		string _batismo, int _tamanho_bico, int _envergadura){

	id = _id;
	classe = _classe;
	cientifico = _cientifico;
	sexo = _sexo;
	tamanho = _tamanho;
	dieta = _dieta;      
	veterinario = _vet;
	tratador = _trat;
	batismo = _batismo;
	tamanho_bico = _tamanho_bico;
	envergadura = _envergadura;
}

Ave::Ave(const Ave &f){
	this->id = f.id;
	this->classe = f.classe;
	this->cientifico = f.cientifico;
	this->sexo = f.sexo;
	this->tamanho = f.tamanho;
	this->dieta = f.dieta;      
	this->veterinario = f.veterinario;
	this->tratador = f.tratador;
	this->batismo = f.batismo;
	this->tamanho_bico = f.tamanho_bico;
	this->envergadura = f.envergadura;
}

Ave::Ave(){}

/**
* @brief Destrutor padrão
*/
Ave::~Ave(){}

/**
* @brief	 Método que extrai o tamanho do bico da ave
* @return 	 tamanho do bico da ave
*/
int 
Ave::get_Tamanho_bico(){
	return tamanho_bico;
}

/**
* @brief	Altera o tamanho do bico da ave
* @param	_tamanho_bico Tamanho do bico da ave
* @return 	Não retorna valor
*/
void 
Ave::set_Tamanho_bico(int _tamanho_bico){
	tamanho_bico = _tamanho_bico;
}

/**
* @brief	 Método que extrai a envergadura da ave
* @return 	 envergadura da ave
*/
int 
Ave::get_Envergadura(){
	return envergadura;
}

/**
* @brief	Altera a envergadura da ave
* @param	_envergadura Envergadura da ave
* @return 	Não retorna valor
*/
void 
Ave::set_Envergadura(int _envergadura){
	envergadura = _envergadura;
}