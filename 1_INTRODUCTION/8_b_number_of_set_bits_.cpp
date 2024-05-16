#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter two numbers: ";
    cin>>a>>b;
    
    int set_a = 0;
    int set_b = 0;
    while(a!=0)
    {
        if(a&1 == 1)
            set_a++;
        a = a>>1;
    }

    while(b!=0)
    {
        if(b&1 == 1)
            set_b++;
        b = b>>1;
    }
    cout<<"the number of set bits in a and b is "<<set_a+set_b<<endl;
}