#include <iostream>

using namespace std;

int main()
{
    int numero;
    int valor;

    cout<<"Dame tu numero de 5 digitos"<<endl;
    cin>>numero;

    cout<<numero/10000;
    valor=numero%10000;
    cout<<"\t"<<valor/1000;
    valor=valor%1000;
    cout<<"\t"<<valor/100;
    valor=valor%100;
    cout<<"\t"<<valor/10;
    valor=valor%10;
    cout<<"\t"<<valor/1;



    return 0;
}
