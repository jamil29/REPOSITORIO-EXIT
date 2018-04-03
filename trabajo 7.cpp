#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
	
	int num, a, a1, b, b1, c, c1, d, d1, e;
	cout<<"Ingrese el numero de 5 cifras"<<endl;
	cin>> num;
	a=num/10000;
	a1=num%10000;
	b=num%10;
	if(a=!b){
		cout<<"No palindrome"<<endl;
	}else
		c=a1/1000;
		c1=a1%1000;
		d=c1/100;
		d1=c1%100;
		e=d1/10;
	
	if (c==e)
	cout<<"Si es palindrome"<<endl;
	else
	cout<<"No es palindrome"<<endl;  
	
	
	return 0;
}
