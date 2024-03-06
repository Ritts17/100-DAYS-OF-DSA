#include <iostream>
using namespace std;

int main()
{
    /*Pattern:
        * * * * *
        *     *
        *   *     
        * *
        *
    */
    int row;
    cin>>row;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<row;j++)
        {
            if(i==0)
            {
                cout<<"* ";
            }
            else if(j==row-i-1 || j==0)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}