#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    int sum=v[0];
    for(int i=1;i<v.size();i++)
    {
        sum=(sum^v[i]);
    }
    cout<<sum;
}