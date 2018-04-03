#include <iostream>

using namespace std;

int main()
{
    int n=1,maxi;
    cout<<"dame tu valor max";cin>>maxi;
    while(n<=maxi)
    {
        if(n<maxi)
        {
            cout<<n<<",";
            n++;
        }
        else
        {
            cout<<n;
            n++;
        }
    }
}
