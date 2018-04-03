#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
	int valor1;
	int valor2;
	
	cout<<"Dame tu primer numero :";
	cin>>valor1;
	cout<<"Dame tu segundo numero :";
	cin>>valor2;
	
	if(valor1%2==0 and valor2%2==0){
	
		cout<<"Tus numeros son multiplos de 2"<<endl;
	} else cout<<"Tus numeros no son multiplos de 2 "<<endl;
	
	if(valor1%valor2==0)
	{
		cout<<valor1<<" Es multiplo de "<<valor2<<endl;
		
	} else cout<<valor1<<" No es multiplo de "<<valor2<<endl;
	
	if(valor1*valor1==valor2){
		cout<<"El cuadrado del primero si nos da el segundo";
	}else cout<<"El cuadrado del primero no nos da como respuesta el segundo ";
	return 0;
}
