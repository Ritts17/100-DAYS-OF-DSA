#include <iostream>
using namespace std;
int main()
{
    /*Pattern:

    1
    1 2
    1   3
    1     4
    1       5
    1         6
    1 2 3 4 5 6 7
    
    */
    //My Logic
    int N;
    cin>>N;
    for(int row=0;row<N;row++)
    {
        int digit=1;
        for(int col=0;col<2*row+1;col++)
        {
            if(row==0 || row==N-1)
            {
                //Number
                if(col%2==0)
                {
                    cout<<digit;
                    digit++;
                }
                //Space
                else
                {
                    cout<<" ";
                }
            }
            else{
                //Number
                if(col==0)
                {
                    cout<<"1";
                }
                else if(col==2*row)
                {
                    cout<<row+1;
                }
                else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
    //Another Logic
    int n;
    cin>>n;
    for(int row=0;row<n;row++)
    {
        for(int col=0;col<row+1;col++)
        {
            if(col==0 || col==row || row==n-1)
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