#include<iostream>
using namespace std;
int main()
{
    int arr[10] = {1,2,3,4,5};
    cout<<"size of arr -> "<<sizeof(arr)<<endl;

    int *ptr = &arr[0]; // in place of &arr[0] we can also use only arr as name of the array is also a pointer pointing to the memory block.
    // -> also pointer pointing to the array is pointing to the first block of the array.
    cout<<sizeof(ptr)<<endl; 
    cout<<"size of data present -> "<<sizeof(*ptr)<<endl;
    cout<<"size of memory required to store the address of the memory to which the pointer is pointing -> "<<sizeof(&ptr)<<endl;
}