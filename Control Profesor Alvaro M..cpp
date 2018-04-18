#include <iostream>
using namespace std;

int perfecto(int n )
{
    int x=1,s=0;
    while(n<=n-1)
    {
        while(x<=(n/2))
        {
            if(n%x==0)
                s=s+x;
                x=x+1;
        }
        if(n==s)
            cout<<n<<", Es perfecto"<<endl;
        n=n+1; x=1;s=0;
    }
    cin.ignore(); return 0;
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



int main() {
	/*cout<<exponente(3,4)<<endl;*/
	/*cout<<primos()<<endl;*/
	cout<<perfecto(6);
	
return 0 ;
	
}
