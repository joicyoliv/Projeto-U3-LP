#ifndef _AVE_H_
#define _AVE_H_

#include "animal.h"

class Ave: public Animal{
public:
	Ave(int _id, string _classe, string _cientifico, char _sexo, float _tamanho,
		string _dieta, share_ptr<PetFera::Veterinario> _vet, share_ptr<PetFera::Tratador> _trat,
		string _batismo, int _tamanho_bico, int _envergadura);

	~Ave();

	int get_Tamanho_bico();
	void set_Tamanho_bico(int _tamanho_bico);

	int get_Envergadura();
	void set_Envergadura(int _envergadura);
	
protected:
	int tamanho_bico;
	int envergadura;
};

#endif