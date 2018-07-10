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
		<<"| 6- Acoes em Funcionario              |"<<endl
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

				menuSeis();
		}

}


void PetFera::menuUm(){

	cout<<"----------------------------------------"<<endl
		<<"|          Tipos de animais            |"<<endl
		<<"| 1- Anfibio Exotico                   |"<<endl
		<<"| 2- Anfibio Nativo                    |"<<endl
		<<"| 3- Mamifero Exotico                  |"<<endl
		<<"| 4- Mamifero Nativo                   |"<<endl
		<<"| 5- Reptil Exotico                    |"<<endl
		<<"| 6- Reptil Exotico                    |"<<endl
		<<"| 7- Ave Exotica                       |"<<endl
		<<"| 8- Ave Nativa                        |"<<endl
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
			}while(i<1 or i >8);



					int _id ;
					string _nome;
					string _cientifico;
					char _sexo;
					float _tamanho;
					string _dieta;					
					string _batismo;
					string _ibama;					
					string _uf_origem;
					string _autorizacao;
					string _pais_origem;

					

		if(i == 1){
					

					int _total_mudas;
					string _ultima_muda;
					_id = 1;
					cout<<"Anfibio : " << endl;
					cout<<"ID : " << _id << endl; 
					cout<< "Classe :  Amphibia" << endl;
					cout<< "nome :" ; getline(cin , _nome); 
					__fpurge(stdin); 
					cout<< "cientifico : " ;  getline(cin , _cientifico) ;
					__fpurge(stdin); 
					cout<< "sexo : " ; cin >> _sexo;
					__fpurge(stdin); 
					string entrada;
					do{
						_tamanho=-1;
						try{
							cout<< "tamanho : ";
							getline(cin , entrada);
							__fpurge(stdin);
							_tamanho = stoi(entrada);
						}catch(std::invalid_argument &e){
							cerr<< "Argumento invalido" <<endl;
						}catch(std::runtime_error &e){
							cerr<< "Limite de alocacao atingida"<< endl;
						}
					}while(_tamanho<0);
					 
					cout<< "dieta : ";  getline(cin , _dieta) ;
					__fpurge(stdin);
					cout<< "batismo : ";  getline(cin , _batismo) ;
					__fpurge(stdin); 
					
					do{
						_total_mudas=-1;
						try{
							cout<< "total_mudas : ";
							getline(cin , entrada);
							__fpurge(stdin);
							_total_mudas = stoi(entrada);
						}catch(std::invalid_argument &e){
							cerr<< "Argumento invalido" <<endl;
						}catch(std::runtime_error &e){
							cerr<< "Limite de alocacao atingida"<< endl;
						}
					}while(_total_mudas<0);
					__fpurge(stdin);
					cout<< "ultima_muda : ";  getline(cin , _ultima_muda);
					__fpurge(stdin);
					cout<<endl;
					cout<< "ibama : ";  getline(cin , _ibama) ;
					__fpurge(stdin);
					cout<< "pais de origem : ";  getline(cin , _pais_origem) ;
					__fpurge(stdin);



					auto _vet = criar_veterinario();
					auto _trat = criar_tratador();

					
					shared_ptr<AnfibioExotico> novo_animal = make_shared<AnfibioExotico>(_id, _nome, _cientifico, _sexo, _tamanho , _dieta , _vet, _trat,_batismo, _total_mudas, _ultima_muda,_ibama,_pais_origem);
					animais.put(novo_animal->get_Id(),novo_animal);
					


			}else if(i==2){
				int _total_mudas;
					string _ultima_muda;
					_id = 2;
					cout<<"Anfibio : " << endl;
					cout<<"ID : " << _id << endl; 
					cout<< "Classe :  Amphibia" << endl;
					cout<< "nome :" ; getline(cin , _nome); 
					__fpurge(stdin); 
					cout<< "cientifico : " ;  getline(cin , _cientifico) ;
					__fpurge(stdin); 
					cout<< "sexo : " ; cin >> _sexo;
					__fpurge(stdin); 
					string entrada;
					do{
						_tamanho=-1;
						try{
							cout<< "tamanho : ";
							getline(cin , entrada);
							__fpurge(stdin);
							_tamanho = stoi(entrada);
						}catch(std::invalid_argument &e){
							cerr<< "Argumento invalido" <<endl;
						}catch(std::runtime_error &e){
							cerr<< "Limite de alocacao atingida"<< endl;
						}
					}while(_tamanho<0);
					 
					cout<< "dieta : ";  getline(cin , _dieta) ;
					__fpurge(stdin);
					cout<< "batismo : ";  getline(cin , _batismo) ;
					__fpurge(stdin); 
					
					do{
						_total_mudas=-1;
						try{
							cout<< "total_mudas : ";
							getline(cin , entrada);
							__fpurge(stdin);
							_total_mudas = stoi(entrada);
						}catch(std::invalid_argument &e){
							cerr<< "Argumento invalido" <<endl;
						}catch(std::runtime_error &e){
							cerr<< "Limite de alocacao atingida"<< endl;
						}
					}while(_total_mudas<0);
					__fpurge(stdin);
					cout<< "ultima_muda : ";  getline(cin , _ultima_muda);
					__fpurge(stdin);
					cout<<endl;
					cout<< "ibama : ";  getline(cin , _ibama) ;
					__fpurge(stdin);
					cout<< "uf de origem : ";  getline(cin , _uf_origem) ;
					__fpurge(stdin);
					cout<< "autorizacao : ";  getline(cin , _autorizacao) ;
					__fpurge(stdin);



					auto _vet = criar_veterinario();
					auto _trat = criar_tratador();

					
					shared_ptr<AnfibioNativo> novo_animal = make_shared<AnfibioNativo>(_id, _nome, _cientifico, _sexo, _tamanho , _dieta , _vet, _trat,_batismo, _total_mudas, _ultima_muda,_ibama,_uf_origem,_autorizacao);
					animais.put(novo_animal->get_Id(),novo_animal);
						
			}else if(i == 3){

						string cor_pelo;
						_id = 3;
						cout<<"Mamifero : " << endl;
						cout<<"ID : " << _id << endl; 
						cout<< "Classe :  Mammalia" << endl;
						cout<< "nome :" ; getline(cin , _nome); 
						__fpurge(stdin); 
						cout<< "cientifico : " ;  getline(cin , _cientifico) ;
						__fpurge(stdin); 
						cout<< "sexo : " ; cin >> _sexo;
						__fpurge(stdin); 
						string entrada;
						do{
							_tamanho=-1;
							try{
								cout<< "tamanho : ";
								getline(cin , entrada);
								__fpurge(stdin);
								_tamanho = stoi(entrada);
							}catch(std::invalid_argument &e){
								cerr<< "Argumento invalido" <<endl;
							}catch(std::runtime_error &e){
								cerr<< "Limite de alocacao atingida"<< endl;
							}
						}while(i<1);
						cout<< "dieta : ";  getline(cin , _dieta) ;
						__fpurge(stdin);
						cout<< "batismo : ";  getline(cin , _batismo) ;
						__fpurge(stdin);
						cout<< "cor do pelo : ";  getline(cin , cor_pelo) ;
						__fpurge(stdin);
						cout<< "ibama : ";  getline(cin , _ibama) ;
						__fpurge(stdin);
						cout<< "pais de origem : ";  getline(cin , _pais_origem) ;
						__fpurge(stdin);


					auto _vet = criar_veterinario();
					auto _trat = criar_tratador();

					
					shared_ptr<MamiferoExotico> novo_animal = make_shared<MamiferoExotico>(_id, _nome, _cientifico, _sexo, _tamanho , _dieta , _vet, _trat,_batismo, cor_pelo,_ibama,_pais_origem);
					animais.put(novo_animal->get_Id(),novo_animal);
					


				}else if(i==4){

					string cor_pelo;
						_id = 4;
						cout<<"Mamifero : " << endl;
						cout<<"ID : " << _id << endl; 
						cout<< "Classe :  Mammalia" << endl;
						cout<< "nome :" ; getline(cin , _nome); 
						__fpurge(stdin); 
						cout<< "cientifico : " ;  getline(cin , _cientifico) ;
						__fpurge(stdin); 
						cout<< "sexo : " ; cin >> _sexo;
						__fpurge(stdin); 
						string entrada;
						do{
							_tamanho=-1;
							try{
								cout<< "tamanho : ";
								getline(cin , entrada);
								__fpurge(stdin);
								_tamanho = stoi(entrada);
							}catch(std::invalid_argument &e){
								cerr<< "Argumento invalido" <<endl;
							}catch(std::runtime_error &e){
								cerr<< "Limite de alocacao atingida"<< endl;
							}
						}while(i<1);
						cout<< "dieta : ";  getline(cin , _dieta) ;
						__fpurge(stdin);
						cout<< "batismo : ";  getline(cin , _batismo) ;
						__fpurge(stdin);
						cout<< "cor do pelo : ";  getline(cin , cor_pelo) ;
						__fpurge(stdin);
						cout<< "ibama : ";  getline(cin , _ibama) ;
						__fpurge(stdin);
						cout<< "uf de origem : ";  getline(cin , _uf_origem) ;
						__fpurge(stdin);
						cout<< "autorizacao : ";  getline(cin , _autorizacao) ;
						__fpurge(stdin);


					auto _vet = criar_veterinario();
					auto _trat = criar_tratador();

					
					shared_ptr<MamiferoNativo> novo_animal = make_shared<MamiferoNativo>(_id, _nome, _cientifico, _sexo, _tamanho , _dieta , _vet, _trat,_batismo, cor_pelo,_ibama,_uf_origem,_autorizacao);
					animais.put(novo_animal->get_Id(),novo_animal);

				}else if(i == 5){
						bool _venenoso;
						string _tipo_veneno;
						_id = 5;
						cout<<"Reptil : " << endl;
						cout<<"ID : " << _id << endl; 
						cout<< "Classe :  Reptilia" << endl;
						cout<< "nome :" ; getline(cin , _nome); 
						__fpurge(stdin); 
						cout<< "cientifico : " ;  getline(cin , _cientifico) ;
						__fpurge(stdin); 
						cout<< "sexo : " ; cin >> _sexo;
						__fpurge(stdin); 
						string entrada;
					do{
						_tamanho=-1;
						try{
							cout<< "tamanho : ";
							getline(cin , entrada);
							__fpurge(stdin);
							_tamanho = stoi(entrada);
						}catch(std::invalid_argument &e){
							cerr<< "Argumento invalido" <<endl;
						}catch(std::runtime_error &e){
							cerr<< "Limite de alocacao atingida"<< endl;
						}
					}while(_tamanho<1);
						cout<< "dieta : ";  getline(cin , _dieta) ;
						__fpurge(stdin);
						cout<< "batismo : ";  getline(cin , _batismo) ;
						__fpurge(stdin);
						string str1 ("T");
  						string str2 ("F");
						do{
							
							cout<< "venenoso : "; 
							getline(cin , entrada);
							
							if(entrada.compare(str1) == 0){
								_venenoso = true;
							}else if( entrada.compare(str2) == 0){
								_venenoso = false;
							}
							__fpurge(stdin);
						}while(entrada.compare(str1) != 0 and entrada.compare(str2) != 0);
						
						cout<< "tipo de veneno : ";  getline(cin , _tipo_veneno) ;
						__fpurge(stdin);
						cout<< "ibama : ";  getline(cin , _ibama) ;
						__fpurge(stdin);
						cout<< "pais de origem : ";  getline(cin , _pais_origem) ;
						__fpurge(stdin);

					auto _vet = criar_veterinario();
					auto _trat = criar_tratador();

					
					shared_ptr<ReptilExotico> novo_animal = make_shared<ReptilExotico>(_id, _nome, _cientifico, _sexo, _tamanho , _dieta , _vet, _trat,_batismo, _venenoso, _tipo_veneno,_ibama,_pais_origem);
					animais.put(novo_animal->get_Id(),novo_animal);
					


				}else if(i==6){
					bool _venenoso;
						string _tipo_veneno;
						_id = 6;
						cout<<"Reptil : " << endl;
						cout<<"ID : " << _id << endl; 
						cout<< "Classe :  Reptilia" << endl;
						cout<< "nome :" ; getline(cin , _nome); 
						__fpurge(stdin); 
						cout<< "cientifico : " ;  getline(cin , _cientifico) ;
						__fpurge(stdin); 
						cout<< "sexo : " ; cin >> _sexo;
						__fpurge(stdin); 
						string entrada;
					do{
						_tamanho=-1;
						try{
							cout<< "tamanho : ";
							getline(cin , entrada);
							__fpurge(stdin);
							_tamanho = stoi(entrada);
						}catch(std::invalid_argument &e){
							cerr<< "Argumento invalido" <<endl;
						}catch(std::runtime_error &e){
							cerr<< "Limite de alocacao atingida"<< endl;
						}
					}while(_tamanho<1);
						cout<< "dieta : ";  getline(cin , _dieta) ;
						__fpurge(stdin);
						cout<< "batismo : ";  getline(cin , _batismo) ;
						__fpurge(stdin);
						string str1 ("T");
  						string str2 ("F");
						do{
							
							cout<< "venenoso : "; 
							getline(cin , entrada);
							
							if(entrada.compare(str1) == 0){
								_venenoso = true;
							}else if( entrada.compare(str2) == 0){
								_venenoso = false;
							}
							__fpurge(stdin);
						}while(entrada.compare(str1) != 0 and entrada.compare(str2) != 0);
						
						cout<< "tipo de veneno : ";  getline(cin , _tipo_veneno) ;
						__fpurge(stdin);
						cout<< "ibama : ";  getline(cin , _ibama) ;
						__fpurge(stdin);
						cout<< "uf de origem : ";  getline(cin , _uf_origem) ;
						__fpurge(stdin);
						cout<< "autorizacao : ";  getline(cin , _autorizacao) ;
						__fpurge(stdin);


					auto _vet = criar_veterinario();
					auto _trat = criar_tratador();

					
					shared_ptr<ReptilNativo> novo_animal = make_shared<ReptilNativo>(_id, _nome, _cientifico, _sexo, _tamanho , _dieta , _vet, _trat,_batismo, _venenoso, _tipo_veneno,_ibama,_uf_origem,_autorizacao);
					animais.put(novo_animal->get_Id(),novo_animal);
				}else if(i == 7){
						int _tamanho_bico;
						int _envergadura;
						_id = 7;
						cout<<"Ave Exotica : " << endl;
						cout<<"ID : " << _id << endl; 
						cout<< "Classe :  Aves" << endl;
						cout<< "nome :" ; getline(cin , _nome); 
						__fpurge(stdin); 
						cout<< "cientifico : " ;  getline(cin , _cientifico) ;
						__fpurge(stdin); 
						cout<< "sexo : " ; cin >> _sexo;
						__fpurge(stdin); 
						string entrada;
						do{
							_tamanho=-1;
							try{
								cout<< "tamanho : ";
								getline(cin , entrada);
								__fpurge(stdin);
								_tamanho = stoi(entrada);
							}catch(std::invalid_argument &e){
								cerr<< "Argumento invalido" <<endl;
							}catch(std::runtime_error &e){
								cerr<< "Limite de alocacao atingida"<< endl;
							}
						}while(_tamanho<1); 
						cout<< "dieta : ";  getline(cin , _dieta) ;
						__fpurge(stdin);
						cout<< "batismo : ";  getline(cin , _batismo) ;
						__fpurge(stdin);
						
						do{
							_tamanho_bico=-1;
							try{
								cout<< "tamanho do bico : ";
								getline(cin , entrada);
								__fpurge(stdin);
								_tamanho_bico = stoi(entrada);
							}catch(std::invalid_argument &e){
								cerr<< "Argumento invalido" <<endl;
							}catch(std::runtime_error &e){
								cerr<< "Limite de alocacao atingida"<< endl;
							}
						}while(_tamanho_bico<0);
						
						do{
							_envergadura=-1;
							try{
								cout<< "envergadura : ";
								getline(cin , entrada);
								__fpurge(stdin);
								_envergadura = stoi(entrada);
							}catch(std::invalid_argument &e){
								cerr<< "Argumento invalido" <<endl;
							}catch(std::runtime_error &e){
								cerr<< "Limite de alocacao atingida"<< endl;
							}
						}while(_envergadura<1);
						cout<< "ibama : ";  getline(cin , _ibama) ;
						__fpurge(stdin);
						cout<< "pais de origem : ";  getline(cin , _pais_origem) ;
						__fpurge(stdin);



					auto _vet = criar_veterinario();
					auto _trat = criar_tratador();

					
					shared_ptr<AveExotica> novo_animal = make_shared<AveExotica>(_id, _nome, _cientifico, _sexo, _tamanho , _dieta , _vet, _trat,_batismo, _tamanho_bico, _envergadura, _ibama,_pais_origem);
					animais.put(novo_animal->get_Id(),novo_animal);
					

				}else if(i == 8){
						int _tamanho_bico;
						int _envergadura;
						_id = 8;
						cout<<"Ave Nativa : " << endl;
						cout<<"ID : " << _id << endl; 
						cout<< "Classe :  Aves" << endl;
						cout<< "nome :" ; getline(cin , _nome); 
						__fpurge(stdin); 
						cout<< "cientifico : " ;  getline(cin , _cientifico) ;
						__fpurge(stdin); 
						cout<< "sexo : " ; cin >> _sexo;
						__fpurge(stdin); 
						string entrada;
						
						do{
							_tamanho=-1;
							try{
								cout<< "tamanho : ";
								getline(cin , entrada);
								__fpurge(stdin);
								_tamanho = stoi(entrada);
							}catch(std::invalid_argument &e){
								cerr<< "Argumento invalido" <<endl;
							}catch(std::runtime_error &e){
								cerr<< "Limite de alocacao atingida"<< endl;
							}
						}while(_tamanho<1); 
						cout<< "dieta : ";  getline(cin , _dieta) ;
						__fpurge(stdin);
						cout<< "batismo : ";  getline(cin , _batismo) ;
						__fpurge(stdin);
						
						do{
							_tamanho_bico=-1;
							try{
								cout<< "tamanho do bico : ";
								getline(cin , entrada);
								__fpurge(stdin);
								_tamanho_bico = stoi(entrada);
							}catch(std::invalid_argument &e){
								cerr<< "Argumento invalido" <<endl;
							}catch(std::runtime_error &e){
								cerr<< "Limite de alocacao atingida"<< endl;
							}
						}while(_tamanho_bico<0);
						
						do{
							_envergadura=-1;
							try{
								cout<< "envergadura : ";
								getline(cin , entrada);
								__fpurge(stdin);
								_envergadura = stoi(entrada);
							}catch(std::invalid_argument &e){
								cerr<< "Argumento invalido" <<endl;
							}catch(std::runtime_error &e){
								cerr<< "Limite de alocacao atingida"<< endl;
							}
						}while(_envergadura<1);
						cout<< "ibama : ";  getline(cin , _ibama) ;
						__fpurge(stdin);
						cout<< "uf de origem : ";  getline(cin , _uf_origem) ;
						__fpurge(stdin);
						cout<< "autorizacao : ";  getline(cin , _autorizacao) ;
						__fpurge(stdin);



						

					auto _vet = criar_veterinario();
					auto _trat = criar_tratador();
					
					shared_ptr<AveNativa> novo_animal = make_shared<AveNativa>(_id, _nome, _cientifico, _sexo, _tamanho , _dieta ,  _vet, _trat,_batismo, _tamanho_bico, _envergadura, _ibama, _uf_origem ,_autorizacao);
					animais.put(novo_animal->get_Id(),novo_animal);
					
				}
			menuPrincipal();
}




void PetFera::menuSeis(){

	int i=0;
	string entrada;
	int id;
	string nome;
	string cpf;
	short idade;
	short tipo_sanguineo;    
	char fatorRH;
	string especialidade;
	

	
		cout<<"----------------------------------------"<<endl
			<<"|             Funcionario              |"<<endl
			<<"| 1- Cadastrar Veterinario             |"<<endl
			<<"| 2- Remocao de Veterinario            |"<<endl
			<<"| 3- Alterar dados de um Veterinario   |"<<endl
			<<"| 4- Listar Veterinario(s)             |"<<endl
			<<"| 5- Cadastrar Tratador                |"<<endl
			<<"| 6- Remocao de Tratador               |"<<endl
			<<"| 7- Alterar dados de um Tratador      |"<<endl
			<<"| 8- Listar Tratador(es)               |"<<endl
			<<"| 9- Voltar para o menu                |"<<endl
			<<"----------------------------------------"<<endl;
		do{
			
			try{
				getline(cin , entrada);
				i= stoi(entrada);


			}catch(std::invalid_argument &e){
				cerr<< "Argumento invalido" <<endl;
			}
		}while(i<1 or i >9);

		if(i == 1){
				cout<<"Veterinario : " << endl;
					
					do{
						id=-1;
						try{
							cout<< "ID : ";
							getline(cin , entrada);
							__fpurge(stdin);
							id = stoi(entrada);
						}catch(std::invalid_argument &e){
							cerr<< "Argumento invalido" <<endl;
						}catch(std::runtime_error &e){
							cerr<< "Limite de alocacao atingida"<< endl;
						}
					}while(id<0);
					cout<<"Nome : "; getline(cin,nome);
					__fpurge(stdin);
					cout<<"CPF : "; getline(cin,cpf) ;
					__fpurge(stdin);
					do{
						idade=-1;
						try{
							cout<<"Idade : ";
							getline(cin , entrada);
							__fpurge(stdin);
							idade = stoi(entrada);
						}catch(std::invalid_argument &e){
							cerr<< "Argumento invalido" <<endl;
						}catch(std::runtime_error &e){
							cerr<< "Limite de alocacao atingida"<< endl;
						}
					}while(idade<0);
					
					do{
						tipo_sanguineo=-1;
						try{
							cout<<"Tipo sanguineo : ";
							getline(cin , entrada);
							__fpurge(stdin);
							tipo_sanguineo = stoi(entrada);
						}catch(std::invalid_argument &e){
							cerr<< "Argumento invalido" <<endl;
						}catch(std::runtime_error &e){
							cerr<< "Limite de alocacao atingida"<< endl;
						}
					}while(tipo_sanguineo<0);
					cout<<"Fator RH : "; cin >> fatorRH ;
					__fpurge(stdin);
					cout<<"Especialidade : "; getline(cin, especialidade) ;
					__fpurge(stdin);
					cout<<endl;
					shared_ptr<Veterinario>  _vet = make_shared<Veterinario>(id,nome,cpf,idade,tipo_sanguineo,fatorRH,especialidade);
					v.push_back(_vet);

			}else if(i==2){
			 
			}else if(i==3){

			}else if(i==4){
				if(v.size()==0){
					cout<<" Veterinario - vetor vazio" << endl;
				}else{
					for(auto indice(0u); indice < v.size() ; ++ indice){
						cout<<"----------------------------------------"<<endl;
						cout<< "Veterinario  "<<indice+1 << " : " << endl <<*(v[indice]);
						cout<<"----------------------------------------"<<endl;
					}
				}
				
			}else if(i==5){
				cout<<"Tratador : " << endl;
					do{
						id=-1;
						try{
							cout<< "ID : ";
							getline(cin , entrada);
							__fpurge(stdin);
							id = stoi(entrada);
						}catch(std::invalid_argument &e){
							cerr<< "Argumento invalido" <<endl;
						}catch(std::runtime_error &e){
							cerr<< "Limite de alocacao atingida"<< endl;
						}
					}while(id<0);
					cout<<"Nome : "; getline(cin,nome);
					__fpurge(stdin);
					cout<<"CPF : "; getline(cin,cpf) ;
					__fpurge(stdin);
					do{
						idade=-1;
						try{
							cout<<"Idade : ";
							getline(cin , entrada);
							__fpurge(stdin);
							idade = stoi(entrada);
						}catch(std::invalid_argument &e){
							cerr<< "Argumento invalido" <<endl;
						}catch(std::runtime_error &e){
							cerr<< "Limite de alocacao atingida"<< endl;
						}
					}while(idade<0);
					
					do{
						tipo_sanguineo=-1;
						try{
							cout<<"Tipo sanguineo : ";
							getline(cin , entrada);
							__fpurge(stdin);
							tipo_sanguineo = stoi(entrada);
						}catch(std::invalid_argument &e){
							cerr<< "Argumento invalido" <<endl;
						}catch(std::runtime_error &e){
							cerr<< "Limite de alocacao atingida"<< endl;
						}
					}while(tipo_sanguineo<0);
					cout<<"Fator RH : "; cin >> fatorRH ;
					__fpurge(stdin);
					cout<<"Especialidade : "; getline(cin, especialidade) ;
					__fpurge(stdin);

					shared_ptr<Tratador>  _trat = make_shared<Tratador>(id,nome,cpf,idade,tipo_sanguineo,fatorRH,especialidade);
					t.push_back(_trat);

			}else if(i==6){
			}else if(i==7){
			}else if(i==8){
				if(t.size()==0){
					cout<<" Tratador - vetor vazio" << endl;
				}else{
					for(auto indice(0u); indice < t.size() ; ++ indice){
						cout<<"----------------------------------------"<<endl;
						cout<< "Tratador "<<indice+1 << " : " << endl << *(t[indice]);
						cout<<"----------------------------------------"<<endl;
					}
				}
				
			}
		

		return menuPrincipal();




}

shared_ptr<Veterinario>& PetFera::criar_veterinario(){

	int i=0;
	string entrada;
	int id;
	string nome;
	string cpf;
	short idade;
	short tipo_sanguineo;    
	char fatorRH;
	string especialidade;
	
	cout<<"----------------------------------------"<<endl
			<<"|             Funcionario              |"<<endl
			<<"| 1- Cadastrar novo Veterinario        |"<<endl
			<<"| 2- Escolher Veterinario existente    |"<<endl
			<<"----------------------------------------"<<endl;
		do{
			
			try{
				getline(cin , entrada);
				i= stoi(entrada);


			}catch(std::invalid_argument &e){
				cerr<< "Argumento invalido" <<endl;
			}
		}while(i<1 or i >2);

		if(i==2){
			if(t.size()==0){
				i=1;
				cout<<"Ainda nao existe veterinario cadastrado"<<endl;
			}
		}

		if(i==1){
			cout<<"Veterinario : " << endl;
					
					do{
						id=-1;
						try{
							cout<< "ID : ";
							getline(cin , entrada);
							__fpurge(stdin);
							id = stoi(entrada);
						}catch(std::invalid_argument &e){
							cerr<< "Argumento invalido" <<endl;
						}catch(std::runtime_error &e){
							cerr<< "Limite de alocacao atingida"<< endl;
						}
					}while(id<0);
					cout<<"Nome : "; getline(cin,nome);
					__fpurge(stdin);
					cout<<"CPF : "; getline(cin,cpf) ;
					__fpurge(stdin);
					do{
						idade=-1;
						try{
							cout<<"Idade : ";
							getline(cin , entrada);
							__fpurge(stdin);
							idade = stoi(entrada);
						}catch(std::invalid_argument &e){
							cerr<< "Argumento invalido" <<endl;
						}catch(std::runtime_error &e){
							cerr<< "Limite de alocacao atingida"<< endl;
						}
					}while(idade<0);
					
					do{
						tipo_sanguineo=-1;
						try{
							cout<<"Tipo sanguineo : ";
							getline(cin , entrada);
							__fpurge(stdin);
							tipo_sanguineo = stoi(entrada);
						}catch(std::invalid_argument &e){
							cerr<< "Argumento invalido" <<endl;
						}catch(std::runtime_error &e){
							cerr<< "Limite de alocacao atingida"<< endl;
						}
					}while(tipo_sanguineo<0);
					cout<<"Fator RH : "; cin >> fatorRH ;
					__fpurge(stdin);
					cout<<"Especialidade : "; getline(cin, especialidade) ;
					__fpurge(stdin);
					cout<<endl;
					shared_ptr<Veterinario>  _vet = make_shared<Veterinario>(id,nome,cpf,idade,tipo_sanguineo,fatorRH,especialidade);
					v.push_back(_vet);
					return v[v.size()-1];
		}

		for(auto indice(0u); indice < v.size() ; ++ indice){
				cout<< "Veterinario "<<indice+1 << " : " << endl << *(v[indice]);
		}
		auto b(0u);
		do{
			
			try{
				getline(cin , entrada);
				b= stoi(entrada);


			}catch(std::invalid_argument &e){
						cerr<< "Argumento invalido" <<endl;
			}
		}while(b<1 or b > v.size());
		return v[b-1];
		


}

shared_ptr<Tratador>& PetFera::criar_tratador(){

		int i=0;
		string entrada;
		int id;
		string nome;
		string cpf;
		short idade;
		short tipo_sanguineo;    
		char fatorRH;
		string especialidade;
	

		cout<<"----------------------------------------"<<endl
			<<"|             Tratador                 |"<<endl
			<<"| 1- Cadastrar novo Tratador           |"<<endl
			<<"| 2- Escolher Tratador existente       |"<<endl
			<<"----------------------------------------"<<endl;
		do{
			
			try{
				getline(cin , entrada);
				i= stoi(entrada);


			}catch(std::invalid_argument &e){
				cerr<< "Argumento invalido" <<endl;
			}
		}while(i<1 or i >2);
		if(i==2){
			if(t.size()==0){
				i=1;
				cout<<"Ainda nao existe tratador cadastrado"<<endl;
			}
		}
		if(i==1){
			cout<<"Tratador : " << endl;
					do{
						id=-1;
						try{
							cout<< "ID : ";
							getline(cin , entrada);
							__fpurge(stdin);
							id = stoi(entrada);
						}catch(std::invalid_argument &e){
							cerr<< "Argumento invalido" <<endl;
						}catch(std::runtime_error &e){
							cerr<< "Limite de alocacao atingida"<< endl;
						}
					}while(id<0);
					cout<<"Nome : "; getline(cin,nome);
					__fpurge(stdin);
					cout<<"CPF : "; getline(cin,cpf) ;
					__fpurge(stdin);
					do{
						idade=-1;
						try{
							cout<<"Idade : ";
							getline(cin , entrada);
							__fpurge(stdin);
							idade = stoi(entrada);
						}catch(std::invalid_argument &e){
							cerr<< "Argumento invalido" <<endl;
						}catch(std::runtime_error &e){
							cerr<< "Limite de alocacao atingida"<< endl;
						}
					}while(idade<0);
					
					do{
						tipo_sanguineo=-1;
						try{
							cout<<"Tipo sanguineo : ";
							getline(cin , entrada);
							__fpurge(stdin);
							tipo_sanguineo = stoi(entrada);
						}catch(std::invalid_argument &e){
							cerr<< "Argumento invalido" <<endl;
						}catch(std::runtime_error &e){
							cerr<< "Limite de alocacao atingida"<< endl;
						}
					}while(tipo_sanguineo<0);
					cout<<"Fator RH : "; cin >> fatorRH ;
					__fpurge(stdin);
					cout<<"Especialidade : "; getline(cin, especialidade) ;
					__fpurge(stdin);

					shared_ptr<Tratador>  _trat = make_shared<Tratador>(id,nome,cpf,idade,tipo_sanguineo,fatorRH,especialidade);
					t.push_back(_trat);
					return t[t.size()-1];
		}
			for(auto indice(0u); indice < t.size() ; ++ indice){
					cout<< "Tratador "<<indice+1 << " : " << endl << *(t[indice]);
				}
			auto b(0u);
				do{
			
					try{
						getline(cin , entrada);
						b= stoi(entrada);


					}catch(std::invalid_argument &e){
						cerr<< "Argumento invalido" <<endl;
					}
				}while(b<1 or b > t.size());
				return t[b-1];

		

}