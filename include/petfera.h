#ifndef PETFERA_H
#define PETFERA_H
#include <iostream>
#include <vector>
#include <stdexcept>
#include <exception>
#include <stdio_ext.h>
#include "anfibioExotico.h"
#include "anfibioNativo.h"
#include "reptilExotico.h"
#include "reptilNativo.h"
#include "mamiferoExotico.h"
#include "mamiferoNativo.h"
#include "aveExotica.h"
#include "aveNativa.h"
#include "HashTable.h"
#include <cassert>




#include <memory>

using namespace std;


template < typename O, class T>
std::ostream& operator<<(O &o, T  &a){

	a.print(o);
	return o;
}


class PetFera{

	HashTable<int ,shared_ptr<Animal> > animais;
	std::vector<shared_ptr<Veterinario>> v;
	std::vector<shared_ptr<Tratador>> t;

	void menuPrincipal();

	void menuUm();

	void menuSeis();
	shared_ptr<Veterinario>& criar_veterinario();
	shared_ptr<Tratador>& criar_tratador();




public:
	PetFera();
	~PetFera();
	void menu();


};


#endif

