#include <iostream>
using namespace std;
int main()
{
    int n1=0, sum=0, n;
    cin>>n;
    cout<<endl<<"------------"<<endl;
    while(n>0)
    {
        int temp=n%10;
        if (temp==0)
        {
            sum=(sum*10)+5;
        }
        else
        {
            sum=(sum*10)+temp;
        }
        n=n/10;
    }
    while(sum>0)
    {
        int temp=sum%10;
        n1=(n1*10)+temp;
        sum=sum/10;
    }
    cout<<n1;
}