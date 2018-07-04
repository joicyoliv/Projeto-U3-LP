#ifndef _REPTIL_H_
#define _REPTIL_H_

#include "animal.h"

class Reptil: public Animal{
public:
	Reptil(int _id, string _classe, string _cientifico, char _sexo, float _tamanho,
		string _dieta, share_ptr<PetFera::Veterinario> _vet, share_ptr<PetFera::Tratador> _trat,
		string _batismo, bool _venenoso, string _tipo_veneno);

	~Reptil();

	bool get_Venenoso();
	void set_Venenoso(bool _venenoso);

	string get_Tipo_veneno();
	void set_Tipo_veneno(string _tipo_veneno);
	
protected:
	bool venenoso;
	string tipo_veneno;
};

#endif