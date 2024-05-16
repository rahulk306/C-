#include<iostream>
using namespace std;

int sum_arr(int arr[], int n)
{
    if(n==0) return 0;
    if(n==1) return arr[0];
    int sum = arr[0] + sum_arr(arr+1,n-1);
    return sum;
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    cout<<sum_arr(arr,5);
}