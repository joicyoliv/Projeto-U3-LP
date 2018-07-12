/**
* @file 	AnfibioExotico.h
* @brief    Arquivo cabeçalho contendo as definições e membros de ave exotica
* @author   Joicy Oliveira  (joiicyoliv@gmail.com)
* @author   William Correia (will.correia.lima@gmail.com)
* @since    04/07/2018
* @date     04/07/2018
*/

#ifndef _ANFIBIO_EXOTICO_H_
#define _ANFIBIO_EXOTICO_H_
#include "exotico.h"
#include "anfibio.h"

/**
* @brief Classe AnfibioExotico, derivada Exotico
*/
class AnfibioExotico: public Exotico, public Anfibio
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
	AnfibioExotico(int _id, string _nome, string _cientifico, char _sexo, float _tamanho,
		string _dieta, shared_ptr<Veterinario>  _vet, shared_ptr<Tratador>  _trat,
		string _batismo, int _total_mudas, string _ultima_muda , string _ibama, string _pais_origem);
	
	/**
	* @brief Destrutor padrão
	*/
	~AnfibioExotico();

	/**
	* @brief Método para imprimir os dados de Ave Exotica
	*/
	std::ostream& print(std::ostream& os) const;

	/**
	* @brief	Método para verificar se os Ave Exotica são iguais
	* @param	AnfibioExotico
	* @return 	True para verdadeiro e False para falso
	*/
	bool operator==( AnfibioExotico const &t);
	
};


#endif