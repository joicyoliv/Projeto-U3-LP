/**
* @file 	aveNativa.h
* @brief     Arquivo de corpo contendo as implementações dos membros de ave nativa
* @author   Joicy Oliveira  (joiicyoliv@gmail.com)
* @author   William Correia (will.correia.lima@gmail.com)
* @since    04/07/2018
* @date     04/07/2018
*/

#include "aveNativa.h"

/**
* @brief Construtor paramatrizado
* @param _id Id da ave nativa
* @param _classe Classe da ave nativa
* @param _cientifico Cientifico da ave nativa
* @param _sexo Sexo da ave nativa
* @param _tamanho Samanho da ave nativa
* @param _dieta Dieta da ave nativa
* @param _vet Veterinario da ave nativa
* @param _trat Tratador da ave nativa
* @param _batismo Batismo da ave nativa
* @param _tamanho_bico Envergadura da ave nativa
* @param _ibama Ibama
* @param _uf_origem Pais de origem da ave nativa
* @param _autorizacao Autorizacao
*/
AveNativa::AveNativa(int _id, string _classe, string _cientifico, char _sexo, float _tamanho,
		string _dieta, shared_ptr<Veterinario> _vet, shared_ptr<Tratador> _trat,
		string _batismo, int _tamanho_bico, int _envergadura,string _ibama, string _uf_origem, 
		string _autorizacao){

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
	uf_origem = _uf_origem;
	autorizacao = _autorizacao;
}

/**
* @brief Destrutor padrão
*/	
AveNativa::~AveNativa(){}