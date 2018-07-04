#ifndef _MAMIFERO_H_
#define _MAMIFERO_H_

#include "animal.h"

class Mamifero: public Animal{
public:
	Mamifero(int _id, string _classe, string _cientifico, char _sexo, float _tamanho,
		string _dieta, share_ptr<PetFera::Veterinario> _vet, share_ptr<PetFera::Tratador> _trat,
		string _batismo, string _cor_pelo);

	~Mamifero();

	string get_Cor_pelo();
	void set_Cor_pelo(string _cor_pelo);
	
protected:
	string cor_pelo;
};

#endif