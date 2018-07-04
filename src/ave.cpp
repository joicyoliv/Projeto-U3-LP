#include "ave.h"

Ave::Ave(int _id, string _classe, string _cientifico, char _sexo, float _tamanho,
		string _dieta, share_ptr<PetFera::Veterinario> _vet, share_ptr<PetFera::Tratador> _trat,
		string _batismo, int _tamanho_bico, int _envergadura){

	id = _id;
	classe = _classe;
	cientifico = _cientifico;
	sexo = _sexo;
	tamanho = _tamanho;
	dieta = _dieta;      
	veterinario = _vet;
	tratador = _trat;
	batismo = _batismo;
	tamanho_bico = _tamanho_bico;
	envergadura = _envergadura;
}

Ave::~Ave(){}

int 
Ave::get_Tamanho_bico(){
	return tamanho_bico;
}

void 
Ave::set_Tamanho_bico(int _tamanho_bico){
	tamanho_bico = _tamanho_bico;
}

int 
Ave::get_Envergadura(){
	return envergadura;
}

void 
Ave::set_Envergadura(int _envergadura){
	envergadura = _envergadura;
}