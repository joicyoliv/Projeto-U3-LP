#include <iostream>
#include <vector>
#include "anfibio.h"
#include "mamifero.h"
#include "reptil.h"
#include "aveExotica.h"
#include "aveNativa.h"



#include <memory>

using namespace std;


template < typename O, class T>
std::ostream& operator<<(O &o, T  &a){

	a.print(o);
	return o;
}



int main(){
	



	return 0;
}