#include <iostream>
using namespace std;
int main()
{
    int n;
    // if(cin>>n)
    // {
    //      cout<<"Ritesh"; //output is getting printed for any integer and float vlaue entered
    // }

    //solid rectangle pattern with given dimensions
    for (int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    //solid square
    cout<<endl;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    //hollow rectangle
    cout<<endl;
    int row,col;
    cin>>row;
    cin>>col;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(i==0 || i==row-1)
            {
                cout<<"* ";
            }
            else{
                if(j==0 || j==col-1)
                {
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
        }
        cout<<endl;
    }
    //Half pyramid
    cout<<endl;
    cin>>row;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    //Inverted half pyramid
    cout<<endl;
    cin>>row;
    for(int i=0;i<row;i++)
    {
        for(int j=row;j>i;j--)
        // for(int j=0;j<row-i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    //Numeric half pyramid
    cout<<endl;
    cin>>row;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
    //Numeric Inverted half pyramid
    cout<<endl;
    cin>>row;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<row-i;j++)
        {
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
    //Half Pyramid on other side
    cout<<endl;
    cin>>row;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<row-i;j++)
        {
            cout<<"  ";
        }
        for(int k=0;k<i+1;k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    int num;
    cout<<endl;
    cin>>num;
    //Prime nUmber
    for(int i=1;i<=num;i++)
    {
        if(i!=1 && i!=num)
        {
            if(num%i==0)
            {
                cout<<"Not a prime number";
                break;
            }
        }
        if(i==num)
        {
            cout<<"Prime number";
        }
    }
    
}