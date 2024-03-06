#include <iostream>
using namespace std;

int main()
{
    /*Pattern:
        *
      *   *
    *       *
  *           *
*               * 
  *           *
    *       *
      *   *
        *
        */
    int n;
    cin>>n;
    for(int row=0;row<n;row++)
    {
        //spaces
        for(int col=0;col<n-row-1;col++)
        {
            cout<<"  ";
        }
        //stars
        for(int i=0;i<(2*row)+1;i++)
        {
            if(i==0 || i==2*row)
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
    for(int row=n-2;row>=0;row--)
    {
        //spaces
        for(int col=0;col<n-row-1;col++)
        {
            cout<<"  ";
        }
        //stars
        for(int i=0;i<(2*row)+1;i++)
        {
            if(i==0 || i==2*row)
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