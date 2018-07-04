#include "anfibio.h"

Anfibio::Anfibio(int _id, string _classe, string _cientifico, char _sexo, float _tamanho,
		string _dieta, share_ptr<PetFera::Veterinario> _vet, share_ptr<PetFera::Tratador> _trat,
		string _batismo, int _total_mudas, string _ultima_muda){

	id = _id;
	classe = _classe;
	cientifico = _cientifico;
	sexo = _sexo;
	tamanho = _tamanho;
	dieta = _dieta;      
	veterinario = _vet;
	tratador = _trat;
	batismo = _batismo;
	total_mudas = _total_mudas;
	ultima_muda = _ultima_muda;
}

Anfibio::~Anfibio(){}

int 
Anfibio::get_Total_mudas(){
	return total_mudas;
}

void 
Anfibio::set_Total_mudas(int _total_mudas){
	total_mudas = _total_mudas;
}

string 
Anfibio::get_Ultima_muda(){
	return ultima_muda;
}

void 
Anfibio::set_Ultima_muda(string _ultima_muda){
	ultima_muda = _ultima_muda;
}