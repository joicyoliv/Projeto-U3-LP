#ifndef _PESSOA_H_
#define _PESSOA_H_

#include "animal.h"

class Pessoa: public Animal{
public:
	Pessoa(int _id, string _classe, string _cientifico, char _sexo, float _tamanho,
		string _dieta, share_ptr<PetFera::Veterinario> _vet, share_ptr<PetFera::Tratador> _trat,
		string _batismo, int _total_mudas, string _ultima_muda);

	~Pessoa();

	
protected:
	
	
};

#endif