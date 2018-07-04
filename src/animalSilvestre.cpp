#include "animalSilvestre.h"

AnimalSilvestre::AnimalSilvestre(string _ibama){
	ibama = _ibama;
}
	
AnimalSilvestre::~AnimalSilvestre(){}

string 
AnimalSilvestre::get_Ibama(){
	return ibama;
}

void 
AnimalSilvestre::set_Ibama(string _ibama){
	ibama = _ibama;
}