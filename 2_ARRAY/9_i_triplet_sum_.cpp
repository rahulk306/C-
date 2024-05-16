#include<iostream>
using namespace std;

void triplet_sum(int arr[],int size)
{
    int start = 0;
    while(start<size-2)
    {
        cout<<arr[start]+arr[start+1]+arr[start+2]<<" ";
        start = start+3;
    }
    if(start==(size-2))
        cout<<arr[size-1]+arr[size-2]<<" ";
    else if(start==(size-1))
        cout<<arr[size-1]<<" ";
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
    int size;
    cout<<"enter the size of the array: ";
    cin>>size;
    int arr[size];
    cout<<"enter the elements of the array: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    display(arr,size);
    triplet_sum(arr,size);
}