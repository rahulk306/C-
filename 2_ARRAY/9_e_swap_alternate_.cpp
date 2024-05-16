#include<iostream>
using namespace std;

void alt_swap(int arr[],int size)
{
    int start = 0;
    while(start<size-1)
    {
        swap(arr[start],arr[start+1]); // swap() is a predefined function.
        start = start+2;
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
    alt_swap(arr,5);
    display(arr,5);
}