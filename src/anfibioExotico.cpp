#include "anfibioExotico.h"




AnfibioExotico::AnfibioExotico(int _id, string _nome, string _cientifico, char _sexo, float _tamanho,
		string _dieta, shared_ptr<Veterinario>  _vet, shared_ptr<Tratador>  _trat,
		string _batismo, int _total_mudas, string _ultima_muda , string _ibama, string _pais_origem ){
	id = _id;
	classe = "Amphibia";
	nome = _nome;
	cientifico = _cientifico;
	sexo = _sexo;
	tamanho = _tamanho;
	dieta = _dieta;      
	veterinario = _vet;
	tratador = _trat;
	batismo = _batismo;
	total_mudas = _total_mudas;
	ultima_muda = _ultima_muda;
	ibama = _ibama;
	this->pais_origem = _pais_origem;
}
	
	/**
	* @brief Destrutor padrão
	*/
	AnfibioExotico::~AnfibioExotico(){}

	/**
	* @brief Método para imprimir os dados de Ave Exotica
	*/
	std::ostream& AnfibioExotico::print(std::ostream & o)const{
	return o<<"---------------------------------------------------------------------" << endl
	<< "Anfibio Exotico : "<< endl 
	<< "ID : " << id << endl
	<< "Classe : " << classe << endl
	<< "nome :" << nome  << endl
	<< "cientifico : " << cientifico  << endl
	<< "sexo : " << sexo  << endl
	<< "tamanho : " << tamanho  << endl
	<< "dieta : "<< dieta  << endl
	<< "batismo : "<< batismo << endl
	<< "total de mudas :"<< total_mudas << endl
	<< "ultima muda :" << ultima_muda << endl
	<< "ibama : "<< ibama << endl
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
	* @param	AnfibioExotico
	* @return 	True para verdadeiro e False para falso
	*/
	bool AnfibioExotico::operator==( AnfibioExotico const &t){
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

			this->total_mudas == t.total_mudas and
			this->ultima_muda == t.ultima_muda and
			ibama == t.ibama and
			this->pais_origem == t.pais_origem)
		{
		return true;
		}
		return false;
	}