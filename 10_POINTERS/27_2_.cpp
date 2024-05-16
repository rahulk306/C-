#include<iostream>
using namespace std;

void update(int **p3)
{
    //p = p+1;  // kuch change nahi hoga.
    //*p3 = *p3 + 1; // this will change the value stored in the pointer 'p' in main by 1 block.
    **p3 = **p3 + 1;  // this will change the value stored in variable i by 1.

}

int main()
{
    int i = 5;
    int *p = &i;
    int **p2 = &p;
    
    cout<<"before updating: "<<endl;
    cout<<i<<endl;
    cout<<p<<endl;
    cout<<p2<<endl;
    update(p2);
    cout<<"after updating: "<<endl;
    cout<<i<<endl;
    cout<<p<<endl;
    cout<<p2<<endl;

}