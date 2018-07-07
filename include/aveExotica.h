/**
* @file 	aveExotica.h
* @brief    Arquivo cabeçalho contendo as definições e membros de ave exotica
* @author   Joicy Oliveira  (joiicyoliv@gmail.com)
* @author   William Correia (will.correia.lima@gmail.com)
* @since    04/07/2018
* @date     04/07/2018
*/

#ifndef _AVE_EXOTICA_H_
#define _AVE_EXOTICA_H_
#include "exotico.h"
#include "ave.h"

/**
* @brief Classe AveExotica, derivada Exotico
*/
class AveExotica: public Exotico, public Ave
{
public:

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
	AveExotica(int _id, string _nome, string _cientifico, char _sexo, float _tamanho,
		string _dieta, shared_ptr<Veterinario> _vet, shared_ptr<Tratador> _trat,
		string _batismo, int _tamanho_bico, int _envergadura,string _ibama, string _pais_origem);
	
	/**
	* @brief Destrutor padrão
	*/
	~AveExotica();

	/**
	* @brief Método para imprimir os dados de Ave Exotica
	*/
	void print(std::ostream &);

	/**
	* @brief	Método para verificar se os Ave Exotica são iguais
	* @param	AveExotica
	* @return 	True para verdadeiro e False para falso
	*/
	bool operator==( AveExotica const &t);
	
};


#endif