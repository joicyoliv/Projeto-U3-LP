
#include "reptilExotico.h"



	ReptilExotico::ReptilExotico(int _id, string _nome, string _cientifico, char _sexo, float _tamanho,
		string _dieta, shared_ptr<Veterinario> _vet, shared_ptr<Tratador> _trat,
		string _batismo, bool _venenoso, string _tipo_veneno ,string _ibama, string _pais_origem){

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
		ibama == _ibama ;
		this->pais_origem == _pais_origem;
	}
	
	/**
	* @brief Destrutor padrão
	*/
	ReptilExotico::~ReptilExotico(){}

	/**
	* @brief Método para imprimir os dados de Ave Exotica
	*/
	std::ostream& ReptilExotico::print(std::ostream & o)const{
	return o<<"---------------------------------------------------------------------" << endl
	<< "Reptil Nativo : "<< endl 
	<< "ID : " << id << endl
	<< "Classe : " << classe << endl
	<< "nome :" << nome  << endl
	<< "cientifico : " << cientifico  << endl
	<< "sexo : " << sexo  << endl
	<< "tamanho : " << tamanho  << endl
	<< "dieta : "<< dieta  << endl
	<< "batismo : "<< batismo << endl
	<< "venenoso :";
	if(venenoso){
		cout <<"true" << endl
		<< "tipo de veneno :" << tipo_veneno << endl;
	}else{
		cout<<"false" << endl;
	}
	cout << "ibama : "<< ibama << endl
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
	* @param	ReptilExotico
	* @return 	True para verdadeiro e False para falso
	*/
	bool ReptilExotico::operator==( ReptilExotico const &t){
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
			this->tipo_veneno == t.tipo_veneno and
			ibama == t.ibama and
			this->pais_origem == t.pais_origem)
		{
			return true;
		}
		return false;
	}