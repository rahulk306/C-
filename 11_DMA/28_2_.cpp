#include<iostream>
using namespace std;

int getsum(int *arr ,int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    return sum;
}

int main()
{
    int n;
    cin>>n;

    //variable size array;
    int *arr = new int[n];

    //taking input in array
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"sum is: "<<getsum(arr,n)<<endl;
}