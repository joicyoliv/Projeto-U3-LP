#ifndef PETFERA_H
#define PETFERA_H
#include <iostream>
#include <vector>
#include <stdexcept>
#include <exception>
#include <stdio_ext.h>
#include "anfibio.h"
#include "mamifero.h"
#include "reptil.h"
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




public:
	PetFera();
	~PetFera();
	void menu();


};


#endif

