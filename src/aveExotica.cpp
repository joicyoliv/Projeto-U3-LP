/**
* @file 	aveExotica.cpp
* @brief    Arquivo de corpo contendo as implementações dos membros de ave exotica
* @author   Joicy Oliveira  (joiicyoliv@gmail.com)
* @author   William Correia (will.correia.lima@gmail.com)
* @since    04/07/2018
* @date     04/07/2018
*/

#include "aveExotica.h"

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
AveExotica::AveExotica(int _id, string _nome, string _cientifico, char _sexo, float _tamanho,
		string _dieta, shared_ptr<Veterinario> _vet, shared_ptr<Tratador> _trat,
		string _batismo, int _tamanho_bico, int _envergadura,string _ibama, string _pais_origem){

	this->id = _id;
	this->classe = "Aves";
	this->nome = _nome;
	this->cientifico = _cientifico;
	this->sexo = _sexo;
	this->tamanho = _tamanho;
	this->dieta = _dieta;      
	this->veterinario = _vet;
	this->tratador = _trat;
	this->batismo = _batismo;
	this->tamanho_bico = _tamanho_bico;
	this->envergadura = _envergadura;
	ibama = _ibama;
	this->pais_origem = _pais_origem;

}

/**
* @brief Destrutor padrão
*/	
AveExotica::~AveExotica(){}

/**
* @brief Método para imprimir os dados de Ave Exotica
*/
std::ostream& AveExotica::print(ostream &o)const{

	return o<<"---------------------------------------------------------------------" << endl
	<< "Ave Exotica : "<< endl 
	<< "ID : " << id << endl
	<< "Classe : " << classe << endl
	<< "nome :" << nome  << endl
	<< "cientifico : " << cientifico  << endl
	<< "sexo : " << sexo  << endl
	<< "tamanho : " << tamanho  << endl
	<< "dieta : "<< dieta  << endl
	<< "batismo : "<< batismo << endl
	<< "tamanho do bico :"<< tamanho_bico << endl
	<< "envergadura do bico :" << envergadura << endl
	<< "ibama : "<< ibama << endl
	<< "pais de origem : " << pais_origem << endl << endl

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
* @brief	Método para verificar se os AveExotica são iguais
* @param	AveExotica
* @return 	True para verdadeiro e False para falso
*/
bool AveExotica::operator==( AveExotica const &t){
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
	this->ibama == t.ibama and
	this->pais_origem == t.pais_origem){
		return true;
	}
	return false;
}