/**
* @file 	aveExotica.cpp
* @brief    Arquivo de corpo contendo as implementações dos membros de ave exotica
* @author   Joicy Oliveira  (joiicyoliv@gmail.com)
* @author   William Correia (will.correia.lima@gmail.com)
* @since    04/07/2018
* @date     04/07/2018
*/

#include "aveExotica.h"

/**
* @brief Construtor paramatrizado
* @param _id Id da ave exotica
* @param _classe Classe da ave exotica
* @param _cientifico Cientifico da ave exotica
* @param _sexo Sexo da ave exotica
* @param _tamanho Samanho da ave exotica
* @param _dieta Dieta da ave exotica
* @param _vet Veterinario da ave exotica
* @param _trat Tratador da ave exotica
* @param _batismo Batismo da ave exotica
* @param _tamanho_bico Envergadura da ave exotica
* @param _ibama Ibama
* @param _pais_origem Pais de origem da ave exotica
*/
AveExotica::AveExotica(int _id, string _classe, string _cientifico, char _sexo, float _tamanho,
		string _dieta, shared_ptr<Veterinario> _vet, shared_ptr<Tratador> _trat,
		string _batismo, int _tamanho_bico, int _envergadura,string _ibama, string _pais_origem){

	this->id = _id;
	this->classe = _classe;
	this->cientifico = _cientifico;
	this->sexo = _sexo;
	this->tamanho = _tamanho;
	this->dieta = _dieta;      
	this->veterinario = _vet;
	this->tratador = _trat;
	this->batismo = _batismo;
	this->tamanho_bico = _tamanho_bico;
	this->envergadura = _envergadura;
	this->ibama = _ibama;
	this->pais_origem = _pais_origem;

}

/**
* @brief Destrutor padrão
*/	
AveExotica::~AveExotica(){}