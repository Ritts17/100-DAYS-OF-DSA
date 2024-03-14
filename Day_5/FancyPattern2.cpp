#include <iostream>
using namespace std;
int main()
{
    /*Pattern:(For N=5)

    1
    2*3
    4*5*6
    7*8*9*10
    11*12*13*14*15
    11*12*13*14*15
    7*8*9*10
    4*5*6
    2*3
    1

    */
    //My Logic
    int N;
    cin>>N;
    int count=1;
    for(int row=0;row<N;row++)
    {
        for(int col=0;col<2*row+1;col++)
        {
            if(col%2==0)
            {
                cout<<count;
                count++;
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    count=count-N;
    int count2=0;
    int count3;
    for(int row=N-1;row>=0;row--)
    {
        if(count2!=0)
        {
        count=count-count2+1;
        count2=0;
        count3=count;
        }
        else{
            count=count-count2;
            count2=0;
            count3=count;
        }
        for(int col=0;col<2*row+1;col++)
        {
            if(col%2==0)
            {
                cout<<count3;
                count3++;
                count2++;
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }

    //Another Logic
    int n;
    cin>>n;
    int c=1;
    for(int row=0;row<n;row++)
    {
        for(int col=0;col<=row;col++)
        {
            cout<<c;
            c++;
            if(col<row)
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }
    int start=c-n;
    for(int row=0;row<n;row++)
    {
        int k=start;
        for(int col=0;col<=n-row-1;col++)
        {
            cout<<k;
            k++;
            if(col<n-row-1)
            {
                cout<<"*";
            }
        }
        start=start-(n-row-1);
        cout<<endl;
    }
    return 0;
}