/**
* @file 	mamifero.h
* @brief    Arquivo de corpo contendo as implementações dos membros de mamifero
* @author   Joicy Oliveira  (joiicyoliv@gmail.com)
* @author   William Correia (will.correia.lima@gmail.com)
* @since    04/07/2018
* @date     04/07/2018
*/


#include "mamifero.h"

/**
* @brief Construtor paramatrizado
* @param _id Id do mamifero
* @param _classe Classe do mamifero
* @param _cientifico Cientifico do mamifero
* @param _sexo Sexo do mamifero
* @param _tamanho Samanho do mamifero
* @param _dieta Dieta do mamifero
* @param _vet Veterinario do mamifero
* @param _trat Tratador do mamifero
* @param _batismo Batismo do mamifero
* @param _cor_pelo Cor do pelo do mamifero
*/
Mamifero::Mamifero(int _id, string _classe, string _cientifico, char _sexo, float _tamanho,
		string _dieta, share_ptr<PetFera::Veterinario> _vet, share_ptr<PetFera::Tratador> _trat,
		string _batismo, string _cor_pelo){

		id = _id;
		classe = _classe;
		cientifico = _cientifico;
		sexo = _sexo;
		tamanho = _tamanho;
		dieta = _dieta;      
		veterinario = _vet;
		tratador = _trat;
		batismo = _batismo;
		cor_pelo = _cor_pelo;
}

/**
* @brief Destrutor padrão
*/
Mamifero::~Mamifero(){}

/**
* @brief	 Método que extrai a cor do pelo do mamifero
* @return 	 cor do pelo do mamifero
*/
string 
Mamifero::get_Cor_pelo(){
	return cor_pelo;
}

/**
* @brief	Altera a cor do pelo do mamifero
* @param	_cor_pelo Cor do pelo do mamifero
* @return 	Não retorna valor
*/
void 
Mamifero::set_Cor_pelo(string _cor_pelo){
	cor_pelo = _cor_pelo;
}