#include <iostream>
using namespace std;

int main()
{
    //Pattern
    //  1
    //  2 3
    //  3 4 5
    //  4 5 6 7
    //  5 6 7 8 9

    int n,count;
    cin>>n;

    for(int row=0;row<n;row++)
    {
        count=row+1;
        for(int col=0;col<row+1;col++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    cout<<endl;
    /*Pattern
        1 
      2 3 2
    3 4 5 4 3
  4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5
    */
   for(int row=0;row<n;row++)
   {
        //spaces
        int count=row+1;
        for(int col=0;col<n-row-1;col++)
        {
            cout<<"  ";
        }
        //half pyramid pattern 
        for(int col=0;col<row+1;col++)
        {
            cout<<count<<" ";
            count++;
        }
        //latter half pyramid palindrome pattern
        count=count-2;
        for(int col=0;col<row;col++)
        {
            cout<<count<<" ";
            count--;
        }
        cout<<endl;
   }
   cout<<endl;
   /*Pattern:
            1
           1 2
          1   3
         1     4
        1 2 3 4 5
    */
    for(int row=0;row<n;row++)
    {
        //spaces
        count=1;
        for(int col=0;col<n-row-1;col++)
        {
            cout<<"  ";
        }
        //numbers
        for(int col=0;col<2*row+1;col++)
        {
            if(row==0 || row==n-1)
            {
                if(col%2==0)
                {
                    cout<<count<<" ";
                    count++;
                }
                else{
                    cout<<"  ";
                }
            }
            else{
                if(col==0)
                {
                    cout<<"1 ";
                }
                else if(col==2*row)
                {
                    cout<<row+1<<" ";
                }
                else{
                    cout<<"  ";
                }
            }
        }
        cout<<endl;
    }
}