#ifndef _ANIMAL_SILVESTRE_H
#define _ANIMAL_SILVESTRE_H

#include <string>
using namespace std;

class AnimalSilvestre
{
public:
	AnimalSilvestre(string _ibama);
	
	~AnimalSilvestre();

	string get_Ibama();
	void set_Ibama(string _ibama);
	
protected:
	string ibama;
	
};


#endif