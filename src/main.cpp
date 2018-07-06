#include <iostream>
#include "animal.h"
#include "animalSilvestre.h"
#include <memory>

using namespace std;

template <typename O, class T>
std::ostream& operator<<(O &o, T  &a){

	a.print(o);
	return o;
}


int main(){
	shared_ptr<Veterinario > vet = make_shared<Veterinario>(1,"joao","0000011",15,1,'a',"Nao fazer nada");
	shared_ptr<Tratador> trat = make_shared<Tratador>(1,"joao","0000011",15,1,'a',"Nao fazer nada");
	//Animal teste(1,"cachorro","Cathiorros",'a',2,"Come tudo",vet,trat,"skoasoka");





	return 0;
}