#include<iostream>
using namespace std;

void arr_rev(int arr[],int size)
{
    int start = 0, end = size-1;
    while(start<=end)
    {
        swap(arr[start],arr[end]); // swap() is a predefined function.
        start++;end--;
    }
}

void display(int arr[],int size)
{
    for (int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main()
{
    int arr[5];
    cout<<"enter the elements of the array: ";
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    display(arr,5);
    arr_rev(arr,5);
    display(arr,5);
}