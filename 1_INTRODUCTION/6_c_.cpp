#include<iostream>
using namespace std;
int main()
{
    int decimal;
    int a[5];
    cout<<"enter the decimal number: ";
    cin>>decimal;
    int i = 0;
    int rem;
    while(decimal>0)
    {
        rem = decimal % 2;
        a[i] = rem;
        decimal = decimal / 2;
        i++;
    }
    while(i>0);
    {
        cout<<a[i-1];
        i--; 
    }

}