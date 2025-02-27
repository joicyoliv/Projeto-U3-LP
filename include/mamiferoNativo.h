/**
* @file 	MamiferoNativo.h
* @brief    Arquivo cabeçalho contendo as definições e membros de ave nativa
* @author   Joicy Oliveira  (joiicyoliv@gmail.com)
* @author   William Correia (will.correia.lima@gmail.com)
* @since    04/07/2018
* @date     04/07/2018
*/

#ifndef _MAMIFERO_NATIVO_H_
#define _MAMIFERO_NATIVO_H_

#include "nativo.h"
#include "mamifero.h"

/**
* @brief Classe MamiferoNativo, derivada Nativo
*/
class MamiferoNativo : public Nativo , public Mamifero
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
	MamiferoNativo(int _id, string _nome, string _cientifico, char _sexo, float _tamanho,
		string _dieta, shared_ptr<Veterinario> _vet, shared_ptr<Tratador> _trat,
		string _batismo,  string _cor_pelo ,string _ibama, string _uf_origem, 
		string _autorizacao);
	
	/**
	* @brief Destrutor padrão
	*/
	~MamiferoNativo();
	
	/**
	* @brief Método para imprimir os dados de Ave Nativa
	*/
	std::ostream& print(std::ostream& os) const;

	/**
	* @brief	Método para verificar se os MamiferoNativo são iguais
	* @param	MamiferoNativo
	* @return 	True para verdadeiro e False para falso
	*/
	bool operator==( MamiferoNativo const &t);
};


#endif