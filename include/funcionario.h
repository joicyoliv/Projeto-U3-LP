#ifndef _FUNCIONARIO_H_
#define _FUNCIONARIO_H_

#include <string>
using namespace std;

class Funcionario
{
public:
	Funcionario(int _id, string _nome, string _cpf, short _idade, short _tipo_sanguineo, 
		char _fatorRH, string _especialidade);

	~Funcionario();

	int get_Id();
	void set_Id(int _id); 
	
	string get_Nome();
	void set_Nome(string _nome);

	string get_Cpf();
	void set_Cpf(string _cpf);

	short get_Idade();
	void set_Idade(short _idade);

	short get_Tipo_Sanguineo();
	void set_Tipo_Sanguineo(short _tipo_sanguineo);

	char get_FatorRH();
	void set_FatorRH(char _fatorRH);

	string get_Especialidade();
	void set_Especialidade(string _especialidade);



protected:
	int id;
	string nome;
	string cpf;
	short idade;
	short tipo_sanguineo;
	char fatorRH;
	string especialidade;

};



#endif