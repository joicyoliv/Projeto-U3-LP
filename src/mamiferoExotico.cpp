#include "mamiferoExotico.h"

	MamiferoExotico::MamiferoExotico(int _id, string _nome, string _cientifico, char _sexo, float _tamanho,
		string _dieta, shared_ptr<Veterinario> _vet, shared_ptr<Tratador> _trat,
		string _batismo, string _cor_pelo ,string _ibama, string _pais_origem){

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
		ibama == _ibama ;
		this->pais_origem == _pais_origem;
	}
	
	/**
	* @brief Destrutor padrão
	*/
	MamiferoExotico::~MamiferoExotico(){}

	/**
	* @brief Método para imprimir os dados de Ave Exotica
	*/
	void MamiferoExotico::print(std::ostream & o){
	o<<"---------------------------------------------------------------------" << endl
	<< "Mamifero Exotico : "<< endl 
	<< "ID : " << id << endl
	<< "Classe : " << classe << endl
	<< "nome :" << nome  << endl
	<< "cientifico : " << cientifico  << endl
	<< "sexo : " << sexo  << endl
	<< "tamanho : " << tamanho  << endl
	<< "dieta : "<< dieta  << endl
	<< "batismo : "<< batismo << endl
	<< "cor do pelo :"<< cor_pelo << endl
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
	* @brief	Método para verificar se os Ave Exotica são iguais
	* @param	MamiferoExotico
	* @return 	True para verdadeiro e False para falso
	*/
	bool MamiferoExotico::operator==( MamiferoExotico const &t){
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
			this->cor_pelo == t.cor_pelo and
			ibama == t.ibama and
			this->pais_origem == t.pais_origem)
		{
		return true;
		}
		return false;
	}