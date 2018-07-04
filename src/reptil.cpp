#include "reptil.h"

Reptil::Reptil(int _id, string _classe, string _cientifico, char _sexo, float _tamanho,
		string _dieta, share_ptr<PetFera::Veterinario> _vet, share_ptr<PetFera::Tratador> _trat,
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

Reptil::~Reptil(){}

bool 
Reptil::get_Venenoso(){
	return venenoso;
}

void 
Reptil::set_Venenoso(bool _venenoso){
	venenoso = _venenoso;
}

string 
Reptil::get_Tipo_veneno(){
	return tipo_veneno;
}

void 
Reptil::set_Tipo_veneno(string _tipo_veneno){
	tipo_veneno = _tipo_veneno;
}