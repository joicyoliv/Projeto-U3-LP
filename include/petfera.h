#ifndef PETFERA_H
#define PETFERA_H
#include <iostream>
#include <vector>
#include <stdexcept>
#include <exception>
#include "anfibio.h"
#include "mamifero.h"
#include "reptil.h"
#include "aveExotica.h"
#include "aveNativa.h"
#include "HashTable.h"




#include <memory>

using namespace std;


template < typename O, class T>
std::ostream& operator<<(O &o, T  &a){

	a.print(o);
	return o;
}


class PetFera{

	HashTable<int ,shared_ptr<Animal> > animais;
	std::vector<Veterinario> v;
	std::vector<Tratador> t;

	void menuPrincipal();

	void menuUm();




public:
	PetFera();
	~PetFera();
	void menu();


};


#endif

