#include <iostream>
using namespace std;

int main()
{
    /*Pattern:
        *
      *   *
    *       *
  *           *   
* * * * * * * * *
        */
    int n;
    cin>>n;
    //formula 2n-1
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<((2*n)-1);j++)
        {
            if(j<n-i-1 || j>n+(i-1))
            {
                cout<<"  ";
            }
            else{
                if(i==0 || i==n-1)
                {
                    cout<<"* ";
                }
                else{
                    cout<<"* ";
                    for(int k=0;k<(2*i)-1;k++)
                    {
                        cout<<"  ";
                        j++;
                    }
                    cout<<"* ";
                    j++;
                }
            }
        }
        cout<<endl;
    }
}