#include<iostream>
using namespace std;
int main()
{
    int i = 2;
    int *p = &i;
    cout<<*p<<endl;

    // copying a pointer in anothe pointer.
    int *q = p;
    cout<<*q<<endl;
}