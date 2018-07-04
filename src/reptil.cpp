/**
* @file 	reptil.cpp
* @brief    Arquivo de corpo contendo as implementações dos membros de reptil
* @author   Joicy Oliveira  (joiicyoliv@gmail.com)
* @author   William Correia (will.correia.lima@gmail.com)
* @since    04/07/2018
* @date     04/07/2018
*/

#include "reptil.h"

/**
* @brief Construtor paramatrizado
* @param _id Id do reptil
* @param _classe Classe do reptil
* @param _cientifico Cientifico do reptil
* @param _sexo Sexo do reptil
* @param _tamanho Tamanho do reptil
* @param _dieta Dieta do reptil
* @param _vet Veterinario do reptil
* @param _trat Tratador do reptil
* @param _batismo Batismo do reptil
* @param _venenoso Venenoso do reptil
* @param _tipo_veneno Tipo de veneno do reptil
*/
Reptil::Reptil(int _id, string _classe, string _cientifico, char _sexo, float _tamanho,
		string _dieta, shared_ptr<Veterinario> _vet, shared_ptr<Tratador> _trat,
		string _batismo, bool _venenoso, string _tipo_veneno){

		id = _id;
		classe = _classe;
		cientifico = _cientifico;
		sexo = _sexo;
		tamanho = _tamanho;
		dieta = _dieta;      
		veterinario = _vet;
		tratador = _trat;
		batismo = _batismo;
		venenoso = _venenoso;
		tipo_veneno = _tipo_veneno;
}

/**
* @brief Destrutor padrão
*/
Reptil::~Reptil(){}

/**
* @brief	 Método booleano para verificar se o reptil é venenoso ou não
* @return 	 True para venenoso ou False para não venenoso
*/
bool 
Reptil::get_Venenoso(){
	return venenoso;
}

/**
* @brief	Altera o atibuto venenoso de reptil
* @param	_venenoso Venenoso 
* @return 	Não retorna valor
*/
void 
Reptil::set_Venenoso(bool _venenoso){
	venenoso = _venenoso;
}

/**
* @brief	 Método que extrai o tipo de veneno do reptil
* @return 	 tipo de veneno do reptil
*/
string 
Reptil::get_Tipo_veneno(){
	return tipo_veneno;
}
/**
* @brief	Altera o tipo de veneno do reptil
* @param	_tipo_veneno Tipo de veneno do reptil
* @return 	Não retorna valor
*/	
void 
Reptil::set_Tipo_veneno(string _tipo_veneno){
	tipo_veneno = _tipo_veneno;
}