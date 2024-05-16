#include<iostream>
using namespace std;

bool check(int arr[], int n)
{
    if(n==1 || n==0) return true; // base case;

    if(arr[0]>arr[1]) return false;
    else return check(arr+1,n-1);

}

int main()
{
    int arr[5] = {1,2,3,4,5};
    cout<<check(arr,5);
}