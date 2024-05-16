#include<iostream>
using namespace std;
int main()
{
    int num = 5;
    int *p = &num;
    cout<<p<<endl; // this will print the address of the variable num.
    cout<<*p<<endl; // this will print the value stored in the addree stored in the pointer p. this is called dereference operator.
    cout<<num<<endl;
    cout<<"address of num is "<<&num<<endl;  //it will give the address of the num variable in hexadecimal format.

    cout<<"size of pointer is: "<<sizeof(p)<<endl; // size of pointer for any type of variable is 8 byte.
}