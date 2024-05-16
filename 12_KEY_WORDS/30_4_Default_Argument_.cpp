#include<iostream>
using namespace std;

void print(int *arr,int n,int start = 2) // here default value of start is 2, so if print don't receive any parameter for start then print() will use the default value of start in the function. 
{
    for(int i=start;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[] = {1,2,3,4,5};
    print(arr,5);
    cout<<endl;
    print(arr,5,1);
}