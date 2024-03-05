#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c)
        {
            cout<<a;
        }
    }
    else
    {
        if(b>c)
        {
            cout<<b;
        }
        else{
            cout<<c;
        }
    }
    cout<<endl;
    if(a>b && a>c)
    {
        cout<<a;
    }
    else
    {
        if(b>c && b>a)
        {
            cout<<b;
        }
        else
        {
            cout<<c;
        }
    }
}