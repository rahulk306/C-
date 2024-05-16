#include<iostream>
#include<bits/stdc++.h> // sort function is defined in this library.
using namespace std;

void print_arr(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[6] = { 1,3,5,2,8,4 };
    sort(arr , arr + 6); //this is a predefined function in cpp to sort a array, we have to give the name of the array + number of elements till which you have to sort the array. and first we have to give the name of the array in which we have to store the sorted array.
    print_arr(arr,6);
}