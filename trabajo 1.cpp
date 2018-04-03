#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
	int valor1=0;
	cout<<"¿Cuantos años tienes ? ";
	cin>>valor1;
	
	if(valor1>=18)
		cout<<"Eres mayor de edad";
	else
		cout<<"Eres menor de edad";
}
