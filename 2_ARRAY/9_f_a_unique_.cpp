// using xor operator
// we can use the xor operator to find the unique element present in the array when all the duplicates elements are two or even in numbers. As we know the xor of two same element is zero. Also the total number of input elements must be odd. that is in the form of (2*m+1) where m is the number of diff element whose duplicate is present in the array.

#include<iostream>
using namespace std;

void unique(int arr[],int size)
{
    int unique = 0;
    for(int i=0 ; i<size ; i++)
    {
        unique = (unique^arr[i]);
    }
    cout<<unique;
}

int main()
{
    int size;
    cout<<"enter the size of the array: ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    
    unique(arr,size);
}