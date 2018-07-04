#ifndef _TRATADOR_H_
#define _TRATADOR_H_

#include "funcionario.h"

class Tratador: public Funcionario{
public:
	Tratador(int _id, string _nome, string _cpf, short _idade, short _tipo_sanguineo, 
		char _fatorRH, string _especialidade);
	
	~Tratador();
	
};

#endif