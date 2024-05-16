#include<iostream>
using namespace std;

void print(int arr[], int s, int e)
{
    for(int i=s;i<=e;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}

bool binarySearch(int *arr, int s, int e , int k)
{
    print(arr,s,e);

    if(s>e) return false;   // element not found

    int mid = s + (e-s)/2;
    if(arr[mid] == k) return true; // element found
    
    if(arr[mid] < k) return binarySearch(arr,mid+1,e,k);
    else return binarySearch(arr,s,mid-1,k);
}

int main()
{
    int arr[6] = {1,2,3,4,5,6};
    cout<<binarySearch(arr,0,5,6);
    return 0;

}