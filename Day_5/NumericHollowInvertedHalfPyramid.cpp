#include <iostream>
using namespace std;
int main()
{
    /*Pattern:(for N=5)
        1 2 3 4 5 
`       2     5 
        3   5 
        4 5 
        5 
    */
    int N;
    cin>>N;
    for(int row=0;row<N;row++)
    {
        for(int col=row;col<N;col++)
        {
            if(col==row || col==N-1 || row==0)
            {
                cout<<col+1<<" ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}