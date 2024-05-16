// scope in array

#include<iostream>
using namespace std;

void print(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void modify(int arr[],int size) // after modifying the data the real values will be modified as in array the base address is passed and no copy is created to do the function.
{
    for(int i=0;i<size;i++)
    {
        arr[i] = arr[i] + 1;
    }
}

int main()
{
    int arr[5] = {1,3,2,5,6};
    print(arr,5);
    modify(arr,5);
    print(arr,5);
}
