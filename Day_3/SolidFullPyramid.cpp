#include <iostream>
using namespace std;

int main()
{
    //full pyramid 
    /*Pattern:
         *
       *   *
     *   *   *
   *   *   *   *
 *   *   *   *   *
    */
    int n;
    cin>>n;
    for(int row=0;row<n;row++)
    {
        for(int col=0;col<n-row-1;col++)
        {
            cout<<"  ";
        }
        for(int i=0;i<row+1;i++)
        {
            cout<<" *  ";
        }
        cout<<endl;
    }
    cout<<endl;
    //FUll inverted pyramid
    /*Pattern:
 *   *   *   *   *
   *   *   *   *
     *   *   *
       *   *
         *
    */
    for(int row=n-1;row>=0;row--)
    {
        for(int col=0;col<n-row-1;col++)
        {
            cout<<"  ";
        }
        for(int i=0;i<row+1;i++)
        {
            cout<<" *  ";
        }
        cout<<endl;
    }
}