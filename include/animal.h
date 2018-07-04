#ifndef _ANIMAL_H_
#define _ANIMAL_H_

#include <string>
using namespace std;

class Animal
{
public:
	Animal(int _id, string _classe, string _cientifico, char _sexo, float _tamanho,
		string _dieta, share_ptr<PetFera::Veterinario> _vet, share_ptr<PetFera::Tratador> _trat,
		string _batismo);
	
	~Animal();

	int get_Id();
	void set_Id(int _id);

	string get_Classe();
	void set_Classe(string _classe);

	string get_Cientifico();
	void set_Cientifico(string _cientifico);

	char get_Sexo();
	void set_Sexo(char _sexo);

	float get_Tamanho();
	void set_Tamanho(float _tamanho);

	string get_Dieta();
	void set_Dieta(string _dieta);

	share_ptr<PetFera::Veterinario> get_Veterinario();
	void set_Veterinario(share_ptr<PetFera::Veterinario> _vet);

	share_ptr<PetFera::Tratador> get_Tratador();
	void set_Tratador(share_ptr<PetFera::Tratador> _trat);

	string get_Batismo();
	void set_Batismo(string _batismo);


protected:
	int id;
	string classe;
	string nome;
	string cientifico;
	char sexo;
	float tamanho;
	string dieta;
	share_ptr<PetFera::Veterinario> veterinario;
	share_ptr<PetFera::Tratador> tratador;
	string batismo;
	
};


#endif