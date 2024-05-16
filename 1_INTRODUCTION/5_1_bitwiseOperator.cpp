#include<iostream>
using namespace std;
int main()
{
    int a=4,b=6;
    cout<<"a&b: "<< (a&b) ;       // and operator
    cout<<"\na|b: "<< (a|b);      // or operator
    cout<<"\n~a: "<<(~a);         // not operator
    cout<<"\na^b: "<<(a^b);       // xor operator
    cout<<"\n3<<1: "<<(3<<1);     // left shift operator used to shift all the bits to one position left.
    cout<<"\n3<<2: "<<(3<<2);     // used to shift all the bits to two position left. 
    cout<<"\n3>>1: "<<(3>>1);     // used to shift all the bits to one position right.
                                  // in right shift or left shift paddding deals with zeros (0 0).
}