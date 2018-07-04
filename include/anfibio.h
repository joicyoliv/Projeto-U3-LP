#ifndef _ANFIBIO_H_
#define _ANFIBIO_H_

#include "animal.h"

class Anfibio: public Animal{
public:
	Anfibio(int _id, string _classe, string _cientifico, char _sexo, float _tamanho,
		string _dieta, share_ptr<PetFera::Veterinario> _vet, share_ptr<PetFera::Tratador> _trat,
		string _batismo, int _total_mudas, string _ultima_muda);

	~Anfibio();

	int get_Total_mudas();
	void set_Total_mudas(int _total_mudas);

	string get_Ultima_muda();
	void set_Ultima_muda(string _ultima_muda);
	
protected:
	int total_mudas;
	string ultima_muda;
	
};

#endif