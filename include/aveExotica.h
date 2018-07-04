#ifndef _AVE_EXOTICA_H_
#define _AVE_EXOTICA_H_

#include "exotico.h"
#include "ave.h"

class AveExotica: public Exotico, public Ave
{
public:
	AveExotica(int _id, string _classe, string _cientifico, char _sexo, float _tamanho,
		string _dieta, share_ptr<PetFera::Veterinario> _vet, share_ptr<PetFera::Tratador> _trat,
		string _batismo, int _tamanho_bico, int _envergadura,string _ibama, string _pais_origem);
	
	~AveExotica();
	
};


#endif