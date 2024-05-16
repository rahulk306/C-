// program to print all subarray of a array.

#include<iostream>
using namespace std;

void sub_array(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            for(int k=i; k<=j;k++)
            {
                cout<<arr[k]<<" ";
            }cout<<endl;
        }
    }
}

int main()
{
    int arr[6] = {1,2,3,4,5,6};
    sub_array(arr,6);
}