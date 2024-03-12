#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    //Bitwise operators are AND, OR, NOT, XOR
    //We also have bitwise leftshift and rightshift operators
    int a=28,b=7;
    bool ans=true;
    cout<< (a & b) <<" "<< (a|b) <<" "<< (~a) <<" "<< (~b)<<" ";
    cout<<(a<<b)<<" "<<~ans;
    a=28;
    int result = ~a;

    cout << result << endl;
    cout << "Original: " << bitset<5>(a) << endl;
    cout << "Result:   " << bitset<5>(result) << endl;

    result = ~a & 0x1F;  // 0x7 is used to mask the bits and limit the representation to 3 bits

    cout << result << endl;

        cout << "Result:   " << bitset<5>(result) << endl;


    //Funfact: If you repeatedly leftshift a number by 1 then the new number is always twice as previous number
    int val1=5;
    cout<<(val1<<1)<<endl; // 5*(2^1)=10
    cout<<(val1<<2)<<endl; // 5*(2^2)=20
    cout<<(val1<<3)<<endl; // 5*(2^3)=40
    cout<<(val1<<4)<<endl; // 5*(2^4)=80

    //Funfact: If you repeatedly rightshift a number by 1 then the new number may be half as previous number.
    
}