#include<iostream>
using namespace std;

int firstOcc(int arr[], int size, int key)
{
    int s = 0, e = size - 1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e)
    {
        if(arr[mid] == key)
        {
            ans = mid;
            e = mid - 1; // for the checking if there is any other key element present in the left part of the mid.
        }
        if(arr[mid] < key)  // right part me jaana hai.
        {
            s = mid + 1;
        }
        if(arr[mid] > key)  // left part me jaana hai.
        {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int lastOcc(int arr[], int size, int key)
{
    int s = 0, e = size - 1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e)
    {
        if(arr[mid] == key)
        {
            ans = mid;
            s = mid + 1; // for the checking if there is any other key element present in the right part of the mid.
        }
        if(arr[mid] < key)  // right part me jaana hai.
        {
            s = mid + 1;
        }
        if(arr[mid] > key)  // left part me jaana hai.
        {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main()
{
    int arr1[] = {1,2,3,3,3,3,3,5};

    cout<<"first occurence of 3 is at index "<<firstOcc(arr1,sizeof(arr1),3)<<endl;
    cout<<"last occurence of 3 is at index "<<lastOcc(arr1,sizeof(arr1),3)<<endl;

    cout<<"Total number of occurence of 3 in the array is "<<lastOcc(arr1,sizeof(arr1),3)-firstOcc(arr1,sizeof(arr1),3)+1<<endl;


    return 0;
}