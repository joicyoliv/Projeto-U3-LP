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
		string _dieta, share_ptr<PetFera::Veterinario> _vet, share_ptr<PetFera::Tratador> _trat,
		string _batismo, int _tamanho_bico, int _envergadura,string _ibama, string _pais_origem){

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
	ibama = _ibama;
	pais_origem = _pais_origem;

}

/**
* @brief Destrutor padrão
*/	
AveExotica::~AveExotica(){}