#ifndef _VETERINARIO_H_
#define _VETERINARIO_H_

#include "funcionario.h"

class Veterinario: public Funcionario{
public:
	Veterinario(int _id, string _nome, string _cpf, short _idade, short _tipo_sanguineo, 
		char _fatorRH, string _especialidade);
	
	~Veterinario();
	
};


#endif