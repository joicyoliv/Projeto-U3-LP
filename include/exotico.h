#ifndef _EXOTICO_H_
#define _EXOTICO_H_

#include "animalSilvestre.h"

class Exotico: public AnimalSilvestre
{
public:
	Exotico(string _ibama, string _pais_origem);

	~Exotico();

	string get_Pais_origem();
	void set_Pais_origem(string _pais_origem);
	
protected:
	string pais_origem;
};

#endif