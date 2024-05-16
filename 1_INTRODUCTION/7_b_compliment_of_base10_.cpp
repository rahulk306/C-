#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a decimal number: ";
    cin>> n;
    int m = n;
    int mask = 0;

    // edge case if n=0;
    if (n==0)
        cout<<1;
    else
    {
        while(m!=0)
        {
            mask = (mask<<1) | 1;
            m = m >> 1;
        }
        int ans = (~n) & mask; 
        cout << "compliment of "<<n<< " is "<<ans<<endl;
    }
    
}