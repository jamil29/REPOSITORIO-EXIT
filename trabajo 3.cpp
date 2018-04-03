#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
	int valor1;
	int valor2;
	int valor3;
	int promedio;
	
	cout<<"Dame tu primer numero :";
	cin>>valor1;
	cout<<"Dame tu segundo numero :";
	cin>>valor2;
	cout<<"Dame tu tercer numero :";
	cin>>valor3;
	if(valor1>valor2 and valor1>valor3)
		cout<<"El valor mayor es "<<valor1;
	if(valor2>valor1 and valor2>valor3)
		cout<<"El valor mayor es "<<valor2;
	if(valor3>valor2 and valor3>valor1)
		cout<<"El valor mayor es "<<valor3;
	cout<<" ---- ";
		
	if(valor1<valor2 and valor1<valor3)
		cout<<"El valor menor es "<<valor1;
	if(valor2<valor1 and valor2<valor3)
		cout<<"El valor menor es "<<valor2;
	if(valor3<valor2 and valor3<valor1)
		cout<<"El valor menor es "<<valor3;
		
	cout<<"----";
	promedio = valor1 + valor2 + valor3;
	
		cout<<"El promedio es : "<<promedio/3;
		
	
		
	
	
	return 0;
}
