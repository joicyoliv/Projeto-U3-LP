#ifndef _AVE_NATIVA_H_
#define _AVE_NATIVA_H_

#include "exotico.h"
#include "ave.h"

class AveNativa: public Nativo
{
public:
	AveNativa(int _id, string _classe, string _cientifico, char _sexo, float _tamanho,
		string _dieta, share_ptr<PetFera::Veterinario> _vet, share_ptr<PetFera::Tratador> _trat,
		string _batismo, int _tamanho_bico, int _envergadura,string _ibama, string _uf_origem, 
		string _autorizacao);
	
	~AveNativa();
	
};


#endif