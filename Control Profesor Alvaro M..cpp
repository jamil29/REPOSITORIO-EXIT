#include <iostream>
using namespace std;

int perfecto(int n )
{

}

int exponente(int v,int e){

	if(e==1){
		return v;
	}
	if(e==0){
		return 1;
	}
	else{
		return v*exponente(v,e-1);

	}
}


int esPrimo(){
	int a=0,i,n;
	
         cout<<"Ingrese numero"<<endl;
         cin>>n;
         for(i=1;i<(n+1);i++){
         if(n%i==0){
             a++;
            }
         }
         if(a!=2){
              cout<<"No es Primo";
            }else{
                cout<<"Si es Primo";
         }
}

bool esPrimo(int n){
    int i;
    if(n == 2)
        return true;
    if(n%2 == 0 || n==1 )
        return false;
    for(i=2; i<=n/2; i++){
        if(n%i == 0)
            return false;
    }
    return true;
}


int vprimo(int n ){
    int num=2;
    int cont=0;
    while(cont!=n)
    {
        if(esPrimo(num))
            {
            cout<<cont++<<endl;
            }
        num+=1;
    }

}


int interca(int a, int b)
{
    a=a*b;
    b=a/b;
    a=a/b;
    cout<<a<<"  "<<b;

}







int intercambio(int a, int b){
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<b<<" "<<a;
}







int main() {
	/*cout<<exponente(3,4)<<endl;*/
	/*cout<<primos()<<endl;
	cout<<perfecto(6);*/
	intercambio(8,66);

return 0 ;

}
