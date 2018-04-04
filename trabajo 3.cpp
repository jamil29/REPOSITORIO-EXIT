#include<iostream>
using namespace std;

int main(){
	int valor1,valor2,valor3,promedio;

	cout<<"Dame tu primer numero :";
	cin>>valor1;
	cout<<"Dame tu segundo numero :";
	cin>>valor2;
	cout<<"Dame tu tercer numero :";
	cin>>valor3;

	(valor1>valor2 && valor1>valor3)?cout<<"El valor mayor es "<<valor1:(valor2>valor1 && valor2>valor3)?cout<<"El valor mayor es "<<valor2:cout<<"El valor mayor es "<<valor3;

	(valor1<valor2 && valor1<valor3)?cout<<"El valor menor es "<<valor1:(valor2<valor1 && valor2<valor3)?cout<<"El valor menor es "<<valor2:cout<<"El valor menor es "<<valor3;
	promedio = valor1 + valor2 + valor3;cout<<"El promedio es : " <<promedio/3;


	return 0;
}

