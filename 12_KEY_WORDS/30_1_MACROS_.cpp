#include<iostream>
using namespace std;

#define p 3.14

int main()
{
    int r = 3;
    double area = p*r*r;
    // p=p+1;   this will give error as we can't modigy macros within the codes.
    cout<<"area of the circle is: "<<area<<endl;
}