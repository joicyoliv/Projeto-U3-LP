#include "aveNativa.h"

AveNativa::AveNativa(int _id, string _classe, string _cientifico, char _sexo, float _tamanho,
		string _dieta, share_ptr<PetFera::Veterinario> _vet, share_ptr<PetFera::Tratador> _trat,
		string _batismo, int _tamanho_bico, int _envergadura,string _ibama, string _uf_origem, 
		string _autorizacao){

	id = _id;
	classe = _classe;
	cientifico = _cientifico;
	sexo = _sexo;
	tamanho = _tamanho;
	dieta = _dieta;      
	veterinario = _vet;
	tratador = _trat;
	batismo = _batismo;
	tamanho_bico = _tamanho_bico;
	envergadura = _envergadura;
	ibama = _ibama;
	uf_origem = _uf_origem;
	autorizacao = _autorizacao;
}
	
AveNativa::~AveNativa(){}