#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
	
	int a;
      cout<<"Ingresa año"<<endl;
      cin>>a;
     if(a % 4 == 0 && (a % 100 != 0 || a % 400 == 0)){
         cout<<"El año "<<a<<" Si es bisiesto ";
     }else{
         cout<<"El anño "<<a<<" No es bisiesto ";
     }
	
	return 0;
}
