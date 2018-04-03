#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
	int numero, a, b, c, d, e;
 
	 printf("Escribe un numero entero con 5 digitos: ");
	 scanf("%d", &numero);
 
	 if (numero >= 10000){
		 if (numero <= 99999){
			 a = numero / 10000;
			 b = (numero % 10000) / 1000;
			 c = (numero % 10000) % 1000 / 100;
			 d = ((numero % 10000) % 1000) % 100 / 10;
			 e = (((numero % 10000) % 1000) % 100) % 10;
 
			 printf("%d   %d   %d   %d   %d\n", a, b, c, d, e);
		 }
	}
	  
	
	
	return 0;
}
