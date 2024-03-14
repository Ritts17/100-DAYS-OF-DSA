#include <iostream>
using namespace std;

int main()
{
    // a++ means pehle use kr lo phir increment karo, similarly for post decrement pehle use kr lo phir decrement karo
    // ++a means pehle increment karo phir use karo, similarly for pre decrement pehle decrement kr lo phir use karo
    int a=10;
    cout<<a<<endl;
    cout<<++a<<endl;
    cout<<a++<<endl;
    cout<<a;
    int c=6;
    a=c++ + 1;
    cout<<endl<<a<<endl;
    int b=5;
    cout<<(++b)*(++b); //Answer is 49 because of precedence of operators
    cout<<(b++)*(b++); 
}
