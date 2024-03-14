#include <iostream>
#include <cmath>

using namespace std;

int decimaltobinary(int n)
{
    int sum=0,i=0;
    while(n>0)
    {
        int bit=n%2;
        sum=bit*(pow(10,i++))+sum;
        n=n/2;
    }
    return sum;
}

int method2(int n)
{
    int sum=0,i=0;
    while(n>0)
    {
        int temp=n&1;
        sum=temp*pow(10,i++)+sum;
        n=(n>>1);
    }
    return sum;
}

int BinaryToDecimal(int num)
{
    int decimal=0;
    int i=0;
    while(num>0)
    {
        int bit=num%10;
        decimal=bit*pow(2,i++)+decimal;
        num=num/10;
    }
    return decimal;
}

int main()
{
    int n;
    cin>>n;
    //Method 1 Division Method
    int binary=decimaltobinary(n);
    cout<<binary<<endl;
    //Method 2 Bitwise Method
    binary =method2(n);
    cout<<binary<<endl;
    //Binary to decimal
    int num;
    cin>>num;
    int decimal=BinaryToDecimal(num);
    cout<<decimal<<endl;
}