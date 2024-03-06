#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int row=1;row<n+1;row++)
    {
        //1-n
        for(int col=1;col<row+1;col++)
        {
            cout<<row<<" ";
            if(col!=row)
            {
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    cout<<endl;
    for(int row=n;row>0;row--)
    {
        //n-1
        for(int col=row;col>0;col--)
        {
            cout<<row<<" ";
            if(col!=1)
            {
                cout<<"* ";
            }
        }
        cout<<endl;

    }
}