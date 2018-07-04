#ifndef _NATIVO_H_
#define _NATIVO_H_

#include "animalSilvestre.h"

class Nativo: public AnimalSilvestre
{
public:
	Nativo(string _ibama, string _uf_origem, string _autorizacao);
	
	~Nativo();

	string get_Uf_origem();
	void set_Uf_origem(string _uf_origem);

	string get_Autorizacao();
	void set_Autorizacao(string _autorizacao);

protected:
	string uf_origem;
	string autorizacao;
};



#endif