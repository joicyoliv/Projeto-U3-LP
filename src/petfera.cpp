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

		switch(i){
			case 1:
					menuUm();
			break;

			case 2:

			break;

			case 3:

			break;

			case 4:

			break;

			case 5:
			
			break;

			case 6:

				animais.print();

			break;
		}

}


void PetFera::menuUm(){

	cout<<"----------------------------------------"<<endl
		<<"|          Tipos de animais            |"<<endl
		<<"| 1- Anfibio                           |"<<endl
		<<"| 2- Mamifero                          |"<<endl
		<<"| 3- Reptil                            |"<<endl
		<<"| 4- Ave Exotica                       |"<<endl
		<<"| 5- Ave Nativa                        |"<<endl
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
			


		}while(i<1 or i >5);


		switch(i){
			case 1:
					int _id = 1;
					string _nome;
					string _cientifico;
					char _sexo;
					float _tamanho;
					string _dieta;					
					string _batismo;
					int _total_mudas;
					string _ultima_muda;

						

					cout<<"Anfibio : " << endl;
					cout<<"ID : " << _id << endl; 
					cout<< "Classe :  Amphibia" << endl;
					cout<< "nome :" ; getline(cin , _nome); 
					__fpurge(stdin); 
					cout<< "cientifico : " ;  getline(cin , _cientifico) ;
					__fpurge(stdin); 
					cout<< "sexo : " ; cin >> _sexo;
					__fpurge(stdin); 
					cout<< "tamanho : " ; cin >> _tamanho ;
					__fpurge(stdin); 
					cout<< "dieta : ";  getline(cin , _dieta) ;
					__fpurge(stdin);
					cout<< "batismo : ";  getline(cin , _batismo) ;
					__fpurge(stdin); 
					cout<< "total_mudas : "; cin >> _total_mudas;
					__fpurge(stdin);
					cout<< "ultima_muda : ";  getline(cin , _ultima_muda);
					__fpurge(stdin);
					cout<<endl;



					int id;
					string nome;
					string cpf;
					short idade;
					short tipo_sanguineo;    
					char fatorRH;
					string especialidade;

					cout<<"Veterinario : " << endl;
					cout<< "ID : " ; cin >> id;
					__fpurge(stdin);
					cout<<"Nome : "; getline(cin,nome);
					__fpurge(stdin);
					cout<<"CPF : "; getline(cin,cpf) ;
					__fpurge(stdin);
					cout<<"Idade : "; cin >> idade ;
					__fpurge(stdin);
					cout<<"Tipo sanguineo : "; cin >> tipo_sanguineo ;
					__fpurge(stdin);
					cout<<"Fator RH : "; cin >> fatorRH ;
					__fpurge(stdin);
					cout<<"Especialidade : "; getline(cin, especialidade) ;
					__fpurge(stdin);
					cout<<endl;
					shared_ptr<Veterinario>  _vet = make_shared<Veterinario>(id,nome,cpf,idade,tipo_sanguineo,fatorRH,especialidade);
					//std::vector<Veterinario> novoV = new std::vector<Veterinario>;


					cout<<"Tratador : " << endl;
					cout<< "ID : " ; cin >> id;
					__fpurge(stdin);
					cout<<"Nome : "; getline(cin,nome);
					__fpurge(stdin);
					cout<<"CPF : "; getline(cin,cpf) ;
					__fpurge(stdin);
					cout<<"Idade : "; cin >> idade ;
					__fpurge(stdin);
					cout<<"Tipo sanguineo : "; cin >> tipo_sanguineo ;
					__fpurge(stdin);
					cout<<"Fator RH : "; cin >> fatorRH ;
					__fpurge(stdin);
					cout<<"Especialidade : "; getline(cin, especialidade) ;
					__fpurge(stdin);

					shared_ptr<Tratador>  _trat = make_shared<Tratador>(id,nome,cpf,idade,tipo_sanguineo,fatorRH,especialidade);
					//std::vector<Tratador> novoT = new std::vector<Veterinario>;


					
					shared_ptr<Anfibio> novo_animal = make_shared<Anfibio>(_id, _nome, _cientifico, _sexo, _tamanho , _dieta , _vet, _trat,_batismo, _total_mudas, _ultima_muda);
					animais.put(novo_animal->get_Id(),novo_animal);
					


			break;





			
		}

			menuPrincipal();
}