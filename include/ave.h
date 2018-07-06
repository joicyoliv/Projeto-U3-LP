/**
* @file 	ave.h
* @brief    Arquivo cabeçalho contendo as definições e membros de ave
* @author   Joicy Oliveira  (joiicyoliv@gmail.com)
* @author   William Correia (will.correia.lima@gmail.com)
* @since    04/07/2018
* @date     04/07/2018
*/

#ifndef _AVE_H_
#define _AVE_H_

#include "animal.h"

/**
* @brief Classe Ave, derivada de Animal
*/
class Ave: public Animal{
public:

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
	Ave(int _id, string _nome, string _cientifico, char _sexo, float _tamanho,
		string _dieta, shared_ptr<Veterinario> _vet, shared_ptr<Tratador> _trat,
		string _batismo, int _tamanho_bico, int _envergadura);

	Ave(const Ave &f);
	Ave();
	/**
	* @brief Destrutor padrão
	*/
	~Ave();

	/**
	* @brief	 Método que extrai o tamanho do bico da ave
	* @return 	 tamanho do bico da ave
	*/
	int get_Tamanho_bico();

	/**
	* @brief	Altera o tamanho do bico da ave
	* @param	_tamanho_bico Tamanho do bico da ave
	* @return 	Não retorna valor
	*/
	void set_Tamanho_bico(int _tamanho_bico);

	/**
	* @brief	 Método que extrai a envergadura da ave
	* @return 	 envergadura da ave
	*/
	int get_Envergadura();

	/**
	* @brief	Altera a envergadura da ave
	* @param	_envergadura Envergadura da ave
	* @return 	Não retorna valor
	*/
	void set_Envergadura(int _envergadura);

	virtual void print(std::ostream &) =0;
	
protected:
	int tamanho_bico;
	int envergadura;
};

#endif