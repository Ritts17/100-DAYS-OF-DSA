#include <iostream>
using namespace std;

int main()
{
    int N,n=1;
    cin>>N;
    for(int row=0;row<N;row++)
    {
        //for row=0,4,8...
        if(row==(2*n)-2 && n%2!=0)
        {
            cout<<"*"<<endl;
            n++;
            continue;
        }
        //space
        if(row%2!=0)
        {
            cout<<" ";
        }
        else
        {
           cout<<"  ";
           n++;
        }
        cout<<"*";
        cout<<endl;
    }
}