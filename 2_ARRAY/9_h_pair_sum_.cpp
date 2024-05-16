// these are not the actual pair sum questions, i didn't know the actual problelm at the time i was solving the question and after this question there is triplet sum question which is also not the real triplet sum question. I have performed some basics stuff while solving these questions.

#include<iostream>
using namespace std;

void pair_sum(int arr[],int size)
{
    int start = 0;
    while(start<size-1)
    {
        cout<<arr[start]+arr[start+1]<<" ";
        start = start+2;
    }
    if(start==size-1)
        cout<<arr[size-1]<<" ";
}

void display(int arr[],int size)
{
    for (int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main()
{
    int size;
    cout<<"enter the size of the array: ";
    cin>>size;
    int arr[size];
    cout<<"enter the elements of the array: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    display(arr,size);
    pair_sum(arr,size);
    // display(arr,5);
}