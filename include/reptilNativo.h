/**
* @file 	ReptilNxotico.h
* @brief    Arquivo cabeçalho contendo as definições e membros de ave nativa
* @author   Joicy Oliveira  (joiicyoliv@gmail.com)
* @author   William Correia (will.correia.lima@gmail.com)
* @since    04/07/2018
* @date     04/07/2018
*/

#ifndef _REPTIL_NATIVO_H_
#define _REPTIL_NATIVO_H_

#include "nativo.h"
#include "reptil.h"

/**
* @brief Classe ReptilNxotico, derivada Nativo
*/
class ReptilNativo : public Nativo , public Reptil
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
	ReptilNativo(int _id, string _nome, string _cientifico, char _sexo, float _tamanho,
		string _dieta, shared_ptr<Veterinario> _vet, shared_ptr<Tratador> _trat,
		string _batismo,  bool _venenoso, string _tipo_veneno ,string _ibama, string _uf_origem, 
		string _autorizacao);
	
	/**
	* @brief Destrutor padrão
	*/
	~ReptilNativo();
	
	/**
	* @brief Método para imprimir os dados de Ave Nativa
	*/
	void print(std::ostream &);

	/**
	* @brief	Método para verificar se os ReptilNxotico são iguais
	* @param	ReptilNxotico
	* @return 	True para verdadeiro e False para falso
	*/
	bool operator==( ReptilNativo const &t);
};


#endif