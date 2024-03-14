#include <iostream>
#include "assert.h"
using namespace std;
int main()
{
    /*Pattern:(for N=5)

    ********1********
    *******2*2*******
    ******3*3*3******
    *****4*4*4*4*****
    ****5*5*5*5*5****

    */
   //My Logic
    int N;
    cin>>N;
    if(N<=9)
    {
    for (int row=0;row<N;row++)
    {
        //stars
        for(int col=0;col<9-row-1;col++)
        {
            cout<<"*";
        }
        //Pyramid pattern
        for(int col=0;col<2*row+1;col++)
        {
            if(col%2==0)
            {
                cout<<row+1;
            }
            else
            {
                cout<<"*";
            }
        }
        for(int col=0;col<9-row-1;col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    }
    else{
        cout<<endl<<"Value not between 0-9!";
    }
    //Method 2
    int n;
    cin>>n;
    assert(n<=9);
    for(int row=0;row<n;row++)
    {
        int start_num_index=8-row;
        int num=row+1;
        int count_num=num;
        for(int col=0;col<17;col++)
        {
            if(col==start_num_index && count_num>0)
            {
                cout<<num;
                start_num_index+=2;
                count_num--;
            }
            else
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}