#include "petfera.h"





PetFera::PetFera(){
	cout << "Criando PetFera"<<endl;

}


PetFera::~PetFera(){

}



void PetFera::menu(){
	this->menuPrincipal();




}



void PetFera::menuPrincipal(){
	cout<<"----------------------------------------"<<endl
		<<"|                Menu                  |"<<endl
		<<"| 1- Cadastrar animal                  |"<<endl
		<<"| 2- Remocao/Venda                     |"<<endl
		<<"| 3- Alterar dados de um animal        |"<<endl
		<<"| 4- Consultar animal/classe           |"<<endl
		<<"| 5- Consultar animal sobre tutela x   |"<<endl
		<<"| 6-                                   |"<<endl
		<<"----------------------------------------"<<endl;
		int i=0;
		string entrada;
		do{
			
			try{
				getline(cin , entrada);
				i= stoi(entrada);


			}catch(std::invalid_argument &e){
				cerr<< "Argumento invalido" <<endl;
			}
			


		}while(i<1 or i >6);
}


void PetFera::menuUm(){

}