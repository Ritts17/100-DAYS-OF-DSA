#include <iostream>
using namespace std;
int main()
{
    /*Pattern:(for N=5)
    
    *
    * *
    * * *
    * * * *
    * * * * *
    * * * *
    * * *
    * *
    *    
    
    */
    int N;
    cin>>N;
    for(int row=0;row<N;row++)
    {
        for(int col=0;col<row+1;col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int row=0;row<N-1;row++)
    {
        for(int col=0;col<N-row-1;col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}