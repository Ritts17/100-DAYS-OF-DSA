#include <iostream>
using namespace std;
int main()
{
    /*Pattern:(for N=5)

          1
        1 2 1
      1 2 3 2 1
    1 2 3 4 3 2 1
  1 2 3 4 5 4 3 2 1
  
    */
    int N;
    cin>>N;
    for(int row=0;row<N;row++)
    {
        //space
        for(int col=0;col<N-row-1;col++)
        {
            cout<<"  ";
        }
        //Numbers reperesented by  half pyramid which is right and bottom based
        for(int col=0;col<row+1;col++)
        {
            cout<<col+1<<" ";
        }
        //Numbers represented by half pyramid which is left and bottom based
        for(int col=row;col>0;col--)
        {
            cout<<col<<" ";
        }
        cout<<endl;

    }
    return 0;
}