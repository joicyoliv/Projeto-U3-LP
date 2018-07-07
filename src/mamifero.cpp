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
Mamifero::Mamifero(int _id, string _nome, string _cientifico, char _sexo, float _tamanho,
		string _dieta, shared_ptr<Veterinario> _vet, shared_ptr<Tratador> _trat,
		string _batismo, string _cor_pelo){

		id = _id;
		classe = "Mammalia";
		nome = _nome;
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

/**
* @brief	Método para imprimir os dados de animal Mamifero
* @return 	Não retorna valor
*/
void Mamifero::print(ostream &o){

	o<<"---------------------------------------------------------------------" << endl
	<< "Mamifero : "<< endl
	<<"ID : " << id << endl
	<< "Classe : " << classe << endl
	<< "nome :" << nome  << endl
	<< "cientifico : " << cientifico  << endl
	<< "sexo : " << sexo  << endl
	<< "tamanho : " << tamanho  << endl
	<< "dieta : "<< dieta  << endl
	<< "batismo : "<< batismo << endl
	<< "cor do pelo : "<< cor_pelo << endl << endl

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
* @brief	Método para verificar se os mamifero são iguais
* @param	Mamifero
* @return 	True para verdadeiro e False para falso
*/
bool Mamifero::operator==( Mamifero const &t){
	if( this->id == t.id and
	this->classe == t.classe and
	this->nome == t.nome and
	this->cientifico == t.cientifico and
	this->sexo == t.sexo and
	this->tamanho == t.tamanho and
	this->dieta == t.dieta and
	//this->veterinario == t.veterinario and
	//this->tratador == t.tratador and
	this->batismo == t.batismo and
	this->cor_pelo == t.cor_pelo){
		return true;
	}
	return false;
}