#include <iostream>

using namespace std;

int main()
{
    int n,a=0,b=1,c=0,i,p=1;

    cout<< "Introduce un numero: ";cin>> n ;

    cout<<endl;
    for(i=1;i<=n;i++)
    {
        c=a+b;
        cout << "Numero " <<"["<< i <<"]"<< " en la serie Fibonacci: " << a << "\n";
        a=b; b=c;
    }
}
