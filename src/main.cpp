#include <iostream>
#include "animal.h"
#include "animalSilvestre.h"
#include <memory>

using namespace std;

int main(){
	shared_ptr<Veterinario > vet = make_shared<Veterinario>(1,"joao","0000011",15,1,'a',"Nao fazer nada");
	shared_ptr<Tratador> trat = make_shared<Tratador>(1,"joao","0000011",15,1,'a',"Nao fazer nada");
	Animal teste(1,"cachorro","Cathiorros",'a',2,"Come tudo",vet,trat,"skoasoka");

	cout<< "ta funcionando mesmo?" << endl;

	cout<< "imprimindo o Animal : " << teste;





	return 0;
}