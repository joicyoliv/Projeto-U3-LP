#include "exotico.h"

Exotico::Exotico(string _ibama, string _pais_origem){
	ibama = _ibama;
	pais_origem = _pais_origem;
}

Exotico::~Exotico(){}

string 
Exotico::get_Pais_origem(){
	return pais_origem;
}

void 
Exotico::set_Pais_origem(string _pais_origem){
	pais_origem = _pais_origem;
}