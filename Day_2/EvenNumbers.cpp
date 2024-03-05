#include <iostream>
using namespace std;

int main()
{
    //Printing even num
    int n;
    cin>>n;
    cout<<endl;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            cout<<i<<" ";
        }
    }
}