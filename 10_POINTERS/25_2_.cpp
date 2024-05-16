#include <iostream>
using namespace std;
int main()
{
    int *p = 0;
    // cout<<*p<<endl; // this will give segementatin error.

    int i = 5;
    int *q = 0;
    q = &i;
    cout << *q << endl;
    int *r = &i;
    cout << *r << endl;
    (*r)++;
    cout << *r << endl;
    cout << i << endl;
}