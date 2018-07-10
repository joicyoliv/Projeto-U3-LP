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
Reptil::Reptil(int _id, string _nome, string _cientifico, char _sexo, float _tamanho,
		string _dieta, shared_ptr<Veterinario> _vet, shared_ptr<Tratador> _trat,
		string _batismo, bool _venenoso, string _tipo_veneno){

		id = _id;
		classe = "Reptilia";
		nome = _nome;
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

Reptil::Reptil(){
	
}

Reptil::Reptil(const Reptil &f){
		id = f.id;
		classe = "Reptilia";
		nome = f.nome;
		cientifico = f.cientifico;
		sexo = f.sexo;
		tamanho = f.tamanho;
		dieta = f.dieta;      
		veterinario = f.veterinario;
		tratador = f.tratador;
		batismo = f.batismo;
		venenoso = f.venenoso;
		tipo_veneno = f.tipo_veneno;
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

/**
* @brief	 Método que imprimi os dados de um Reptil
*/
void Reptil::print(ostream &o){

	o<<"---------------------------------------------------------------------" << endl
	<< "Reptil : " << endl
	<<"ID : " << id << endl
	<< "Classe : " << classe << endl
	<< "nome :" << nome  << endl
	<< "cientifico : " << cientifico  << endl
	<< "sexo : " << sexo  << endl
	<< "tamanho : " << tamanho  << endl
	<< "dieta : "<< dieta  << endl
	<< "batismo : "<< batismo << endl
	<< "venenoso : "<< venenoso << endl
	<< "tipo de veneno : "<< tipo_veneno << endl << endl

	<< "Veterinario : " << endl
	<<"ID : " << veterinario->get_Id() << endl
	<<"Nome : "<<veterinario->get_Nome() << endl
	<<"CPF : "<< veterinario->get_Cpf() << endl
	<<"Idade : "<<veterinario->get_Idade() << endl
	<<"Tipo sanguineo : "<< veterinario->get_Tipo_Sanguineo() << endl
	<<"Fator RH : "<< veterinario->get_FatorRH() << endl
	<<"Especialidade : "<< veterinario->get_Especialidade() << endl << endl


	<< "Tratador " << endl
	<<"ID : " << tratador->get_Id() << endl
	<<"Nome : "<<tratador->get_Nome() << endl
	<<"CPF : "<< tratador->get_Cpf() << endl
	<<"Idade : "<<tratador->get_Idade() << endl
	<<"Tipo sanguineo : "<< tratador->get_Tipo_Sanguineo() << endl
	<<"Fator RH : "<< tratador->get_FatorRH() << endl
	<<"Especialidade : "<< tratador->get_Especialidade() << endl
	<<"---------------------------------------------------------------------" << endl;
}

/**
* @brief	Método para verificar se os Reptil são iguais
* @param	Reptil
* @return 	True para verdadeiro e False para falso
*/
bool Reptil::operator==( Reptil const &t){
	if( this->id == t.id and
	this->classe == t.classe and
	this->nome == t.nome and
	this->cientifico == t.cientifico and
	this->sexo == t.sexo and
	this->tamanho == t.tamanho and
	this->dieta == t.dieta and
	*veterinario == *(t.veterinario) and
	*tratador == *(t.tratador) and
	this->batismo == t.batismo and
	this->venenoso == t.venenoso and
	this->tipo_veneno == t.tipo_veneno){
		return true;
	}
	return false;
}
