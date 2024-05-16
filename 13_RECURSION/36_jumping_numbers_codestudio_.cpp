#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool jump(int number,int divisor)
{
    if(number<10) return true;
    int last = number%divisor;
    number = number/10;
    int second_last = number%divisor;
    if(abs(last-second_last)!=1) return false;
    return jump(number,divisor);
}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        if(jump(i,10)) cout<<i<<" ";
    }
    cout<<endl;
}