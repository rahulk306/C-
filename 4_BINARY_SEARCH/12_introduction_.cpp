// in binary search we must have the array in sorted manner.
// time complexity of binary search is O(log n).

#include<iostream>
using namespace std;

int binary(int arr[],int size,int key)
{
    int start = 0;
    int end = size - 1;
    
    int mid = start + (end - start)/2;

    while(start<=end)
    {
        if(arr[mid] == key)      // return the mid index in the array.
            return mid; 
        if(arr[mid] < key)       // to go right part of the array.
            start = mid + 1;
        if(arr[mid] > key)       // to go left part of the array.
            end = mid - 1;
        mid = start + (end - start)/2;
    }
    return -1;
}

int main()
{
    int arr1[6] = {1,2,3,4,5,6};
    int arr2[7] = {3,6,9,12,15,18,21};

    cout<<"index of 4 is " << binary(arr1,6,4)<<endl;
    cout<<"index of 12 in arr2 is: "<< binary(arr2,7,12);
}