#include <iostream>
using namespace std;
int main()
{
    //Condition:
    // if  a,b,c are sides of a trinagle then:
    // 1. (a+b)>c and
    // 2. (a+c)>b and
    // 3. (b+c)>a only then the triangle is valid
    int a,b,c;
    cin>>a>>b>>c;
    if((a+b)>c && (a+c)>b && (b+c)>a)
    {
        cout<<"\nValid!!";
    }
    else
    {
        cout<<"Invalid!!";
    }
    return 0;
}