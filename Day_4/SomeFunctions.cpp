#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void PrintDigit(int num)
{
    int temp,sum=0;
    while(num>0)
    {
        temp=num%10;
        sum=sum*10+temp;
        num=num/10;
    }
    while(sum>0)
    {
        temp=sum%10;
        cout<<temp<<" ";
        sum=sum/10;
    }
    cout<<endl;
}

void CreateDigits(int a,int b)
{
    cout<<"Possible Number 1:"<<a*10+a;
    cout<<endl<<"Possible Number 2:"<<a*10+b;
    cout<<endl<<"Possible Number 3:"<<b*10+a;
    cout<<endl<<"Possible Number 4:"<<b*10+b<<endl;
}

void SetBits(int num)
{
    int i=0,sum=0;
    while(num>0)
    {
        int temp=num%10;
        sum=sum+(temp*pow(2,i));
        i++;
        num=num/10;
    }
    cout<<sum<<endl;
}

int DecimaltoBinary(int num)
{
    string temp;
    string sum="";
    while(num>0)
    {
        temp=to_string(num%2);
        sum+=temp;
        num=num/2;
    }
    int i=0,j=sum.size()-1;
    if(sum.size()%2==0)
    {
        while(i<j)
        {
            char temp=sum[i];
            sum[i]=sum[j];
            sum[j]=temp;
            i++;
            j--;
        }
        cout<<sum<<endl;
    }
    else
    {
        while(i!=j)
        {
            char temp=sum[i];
            sum[i]=sum[j];
            sum[j]=temp;
            i++;
            j--;
        }
    }
    int final=stoi(sum);
    return final;
}

int main()
{
    //Print all digits in an Integer
    int num;
    cin>>num;
    PrintDigit(num);
    //Create number using digits
    int a,b;
    cin>>a>>b;
    CreateDigits(a,b);
    //Print number of set bits
    cin>>num;
    SetBits(num);
    //Print Binary equvalent of given decimal number
    cin>>num;
    int a=DecimaltoBinary(num);
    cout<<a<<endl;
}
