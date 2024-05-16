#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter a -ve decimal number: ";
    cin>>n;
    int ans = 0;
    int i = 0;
    // int bit = ~n;
    // bit = bit + 1;
    while(n!=0)
    {
        int bit = n & 1;
        bit = ~bit;
        ans = (bit * pow(10,i)) + ans;
        n = n>>1;
        i++;
    }
    ans = ans + 1;
    cout<<ans;
}