/**
* @file 	aveNativa.h
* @brief     Arquivo de corpo contendo as implementações dos membros de ave nativa
* @author   Joicy Oliveira  (joiicyoliv@gmail.com)
* @author   William Correia (will.correia.lima@gmail.com)
* @since    04/07/2018
* @date     04/07/2018
*/

#include "aveNativa.h"

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
AveNativa::AveNativa(int _id, string _nome, string _cientifico, char _sexo, float _tamanho,
		string _dieta, shared_ptr<Veterinario> _vet, shared_ptr<Tratador> _trat,
		string _batismo, int _tamanho_bico, int _envergadura,string _ibama, string _uf_origem, 
		string _autorizacao){

	id = _id;
	classe = "Aves";
	nome = _nome;
	cientifico = _cientifico;
	sexo = _sexo;
	tamanho = _tamanho;
	dieta = _dieta;      
	veterinario = _vet;
	tratador = _trat;
	batismo = _batismo;
	tamanho_bico = _tamanho_bico;
	envergadura = _envergadura;
	ibama = _ibama;
	uf_origem = _uf_origem;
	autorizacao = _autorizacao;
}

/**
* @brief Destrutor padrão
*/	
AveNativa::~AveNativa(){}

/**
* @brief Método para imprimir os dados de Ave Nativa
*/
void AveNativa::print(ostream &o){

	o<<"---------------------------------------------------------------------" << endl
	<< "Ave Nativa : "<< endl 
	<<"ID : " << id << endl
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
	<< "uf de origem : "<< uf_origem << endl
	<< "autorizacao : "<< autorizacao << endl<<endl

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
* @brief	Método para verificar se os AveNativa são iguais
* @param	AveNativa
* @return 	True para verdadeiro e False para falso
*/
bool AveNativa::operator==( AveNativa const &t){
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
	this->uf_origem == t.uf_origem and
	this->autorizacao == t.autorizacao){
		return true;
	}
	return false;
}