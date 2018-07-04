#include "nativo.h"

Nativo::Nativo(string _ibama, string _uf_origem, string _autorizacao){
	ibama = _ibama;
	uf_origem = _uf_origem;
	autorizacao = _autorizacao;
}
	
Nativo::~Nativo(){}

string 
Nativo::get_Uf_origem(){
	return uf_origem;
}

void 
Nativo::set_Uf_origem(string _uf_origem){
	uf_origem = _uf_origem;
}

string 
Nativo::get_Autorizacao(){
	return autorizacao;
}
	
void 
Nativo::set_Autorizacao(string _autorizacao){
	autorizacao = _autorizacao;
}