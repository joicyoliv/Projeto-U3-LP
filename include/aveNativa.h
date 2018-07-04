/**
* @file 	aveNativa.h
* @brief    Arquivo cabeçalho contendo as definições e membros de ave nativa
* @author   Joicy Oliveira  (joiicyoliv@gmail.com)
* @author   William Correia (will.correia.lima@gmail.com)
* @since    04/07/2018
* @date     04/07/2018
*/

#ifndef _AVE_NATIVA_H_
#define _AVE_NATIVA_H_

#include "exotico.h"
#include "ave.h"

/**
* @brief Classe AveNativa, derivada Nativo
*/
class AveNativa: public Nativo, public Ave
{
public:

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
	AveNativa(int _id, string _classe, string _cientifico, char _sexo, float _tamanho,
		string _dieta, shared_ptr<Veterinario> _vet, shared_ptr<Tratador> _trat,
		string _batismo, int _tamanho_bico, int _envergadura,string _ibama, string _uf_origem, 
		string _autorizacao);
	
	/**
	* @brief Destrutor padrão
	*/
	~AveNativa();
	
};


#endif