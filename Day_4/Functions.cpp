#include <iostream>
using namespace std;

bool check(int n)
{
    int num=n,sum=0;
    while(n>0)
    {
        int temp=n%10;
        sum=sum*10+temp;
        n=n/10;
    }
    if(sum==num)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int IsPalindrome(int N)
{
    int num=N;
    while(true)
    {
        num++;
        bool flag=check(num);
        if(flag==1)
        {
            return num;
        }
    }
}

int SumTillN(int N)
{
    int sum=0;
    for (int i=2;i<=N;i=i+2)
    {
        sum=sum+i;
        
    }
    return sum;
}

int factorial(int n)
{
    int fact;
    if(n==1 || n==0)
    {
        return 1;
    }
    else{
        return fact=n*factorial(n-1);
    }
}

double Area(double radius)
{
    return radius*radius*3.142;
}

bool EvenOdd(int num)
{
    if(num%2==0)
    {
        return 1;
    }
    return 0;
}

bool CheckPrime(int num)
{
    if(num==0 || num==1)
    {
        return 0;
    }
    for(int i=2;i<=num;i++)
    {
        if(i!=2 && i!=num)
        {
            if(num%i==0)
            {
                return 0;
            }
        }
    }
    return 1;
}

int main()
{
    //Factorial of given number
    int num;
    cin>>num;
    int number=factorial(num);
    cout<<number<<endl;
    //Sum of even numbers to N
    int N;
    cin>>N;
    int sum=SumTillN(N);
    cout<<sum<<endl;
    //Next nearest palindrome
    int a;
    cin>>a;
    int final=IsPalindrome(a);
    cout<<final<<endl;
    //Function to display area of circle
    double radius;
    cin>>radius;
    double area=Area(radius);
    cout<<area<<endl;
    //Even or Odd
    cin>>num;
    bool answer=EvenOdd(num);
    if(answer==1)
    {
        cout<<"Even: "<<num<<endl;
    }
    else
    {
        cout<<"Odd: "<<num<<endl;
    }
    //Check if number id prime or not
    cin>>num;
    answer=CheckPrime(num);
    if(answer==1)
    {
        cout<<"Prime: "<<num<<endl;
    }
    else
    {
        cout<<"Not Prime: "<<num<<endl;
    }
}