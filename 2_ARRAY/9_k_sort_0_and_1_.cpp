#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print_arr(int arr[],int size)
{
    for(int i=0;i<size;i++)
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

    print_arr(arr,size);
    sort(arr,arr+size);
    print_arr(arr,size);
}