/**
* @file 	anfibio.h
* @brief    Arquivo cabeçalho contendo as definições e membros de anfibio
* @author   Joicy Oliveira  (joiicyoliv@gmail.com)
* @author   William Correia (will.correia.lima@gmail.com)
* @since    04/07/2018
* @date     04/07/2018
*/


#ifndef _ANFIBIO_H_
#define _ANFIBIO_H_

#include "animal.h"

/**
* @brief Classe Anfibio, derivada de Animal
*/
class Anfibio: public Animal{
public:

	/**
	* @brief Construtor paramatrizado
	* @param _id Id do anfibio
	* @param _classe Classe do anfibio
	* @param _cientifico Cientifico do anfibio
	* @param _sexo Sexo do anfibio
	* @param _tamanho Samanho do anfibio
	* @param _dieta Dieta do anfibio
	* @param _vet Veterinario do anfibio
	* @param _trat Tratador do anfibio
	* @param _batismo Batismo do anfibio
	* @param _total_mudas Total de mudas do anfibio
	* @param _ultima_muda Ultima muda do anfibio
	*/
	Anfibio(int _id, string _nome, string _cientifico, char _sexo, float _tamanho,
		string _dieta, shared_ptr<Veterinario> _vet, shared_ptr<Tratador>  _trat,
		string _batismo, int _total_mudas, string _ultima_muda);

	/**
	* @brief Destrutor padrão
	*/
	~Anfibio();

	/**
	* @brief	 Método que extrai o total de mudas do anfibio
	* @return 	 total de mudas do anfibio
	*/
	int get_Total_mudas();

	/**
	* @brief	Altera o total de mudas do anfibio
	* @param	_total_mudas Total de mudas do anfibio
	* @return 	Não retorna valor
	*/	
	void set_Total_mudas(int _total_mudas);

	/**
	* @brief	 Método que extrai o ultima de muda do anfibio
	* @return 	 ultima muda do anfibio
	*/
	string get_Ultima_muda();

	/**
	* @brief	Altera a ultima muda do anfibio
	* @param	_ultima_muda Ultima muda do anfibio
	* @return 	Não retorna valor
	*/
	void set_Ultima_muda(string _ultima_muda);

	/**
	* @brief	Método para imprimir dados de anfibio
	* @return 	Não retorna valor
	*/
	void print(std::ostream &);
	
protected:
	int total_mudas;
	string ultima_muda;
	
};

#endif