#include<iostream>
using namespace std;

int getSum(int *arr, int n)
{
    int sum=0;
    //cout<<sizeof(arr)<<endl;
    for(int i=0;i<5;i++)
    {
        sum+=(*arr)+i;
    }
    return sum;
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    cout<<"Sum is -> "<<getSum(arr,5)<<endl;
}