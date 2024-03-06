#include <iostream>
using namespace std;

int main()
{
    /* Pattern:
        * * * * *   * * * * *
        * * * *       * * * *
        * * *           * * *
        * *               * *
        *                   *
        *                   *
        * *               * *
        * * *           * * *
        * * * *       * * * *
        * * * * *   * * * * *
    */
    int n;
    cin>>n;
    for(int row=0;row<n;row++)
    {
        //inverted half pyramid on left edge
        for(int col=0;col<n-row;col++)
        {
            cout<<"* ";
        }
        //spaces as full inverted pyramid
        for(int col=0;col<2*row+1;col++)
        {
            cout<<"  ";
        }
        //again inverted half pyramid on right edge
        for(int col=0;col<n-row;col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    //now normal pyramids on other side
    for(int row=0;row<n;row++)
    {
        //stars as half pyramid on left edge
        for(int col=0;col<row+1;col++)
        {
            cout<<"* ";
        }
        //spaces as full pyramid
        for(int col=0;col<2*n-2*row-1;col++)
        {
            cout<<"  ";
        }
        //stars as half pyramid on right edge
        for(int col=0;col<row+1;col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}