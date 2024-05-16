#include<iostream>
using namespace std;

void max_min(int arr[],int size)
{
    int maxi = INT_MIN;
    int mini = INT_MAX;

    for(int i=0;i<size;i++)
    {
        // if (arr[i]>max)
        //     max = arr[i];
        maxi = max(arr[i],maxi); // here max() and min() are predefined functions, which is used to get the maximum and minimum of two numbers.

        // if (arr[i]<min)
        //     min = arr[i];
        mini = min(arr[i],mini);
    }
    cout<<"max element is:"<<maxi<<"  , min element is:"<<mini<<endl;
}

int main()
{
    int arr[10];
    cout <<"enter the elements of the array: ";
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    max_min(arr,10);

}