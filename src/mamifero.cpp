#include "mamifero.h"

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

Mamifero::~Mamifero(){}

string 
Mamifero::get_Cor_pelo(){
	return cor_pelo;
}

void 
Mamifero::set_Cor_pelo(string _cor_pelo){
	cor_pelo = _cor_pelo;
}