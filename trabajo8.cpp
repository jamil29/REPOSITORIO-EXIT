#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
	
	int a;
      cout<<"Ingresa a�o"<<endl;
      cin>>a;
     if(a % 4 == 0 && (a % 100 != 0 || a % 400 == 0)){
         cout<<"El a�o "<<a<<" Si es bisiesto ";
     }else{
         cout<<"El an�o "<<a<<" No es bisiesto ";
     }
	
	return 0;
}
