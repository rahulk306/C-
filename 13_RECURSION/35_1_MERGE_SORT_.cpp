#include<iostream>
using namespace std;

void merge(int *arr, int s ,int e)
{
    int mid = s + (e-s)/2;


    // ab hum do array bnayenge aur dono me half half original array ke elements ko copy kr denge. aur phir merge 2 sorted array wala concept lga ke dono ko merge kr lenge.
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];  // here we have dynamically allocated two arrays. so at end we should delete the allocated memory.
    int *second = new int[len2];

    // ab elements ko copy kr lete hai
    int mainArrayIndex = s;   // main array ka starting index ko store kr lete hai
    for(int i=0 ; i<len1 ; i++)
    {
        first[i] = arr[mainArrayIndex++];
    }

    for(int i=0 ; i<len2 ; i++)
    {
        second[i] = arr[mainArrayIndex++];
    }

    // ab dono sorted array ko merge kr lete hai purane wale concept se
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while(index1<len1 && index2<len2)
    {
        if( first[index1] < second[index2] )  arr[mainArrayIndex++] = first[index1++];

        else arr[mainArrayIndex++] = second[index2++];
    }

    while( index1 < len1 )
    {
        arr[mainArrayIndex++] = first[index1++];
    }

    while( index2 < len2 )
    {
        arr[mainArrayIndex++] = second[index2++];
    }

    delete []first;
    delete []second;


}

void mergeSort(int *arr, int s , int e )
{
    // base case
    if(s>=e) return;

    // left part sort krna hai abhi
    int mid = s + (e-s)/2;
    mergeSort(arr,s,mid);

    // right part to sort kr lete hai ab
    mergeSort(arr,mid+1,e);

    // ab dono part to sort kr leye hai to ab dono ko merge kr dete hai
    // merge krne ke leye ek function likhna hoga
    merge(arr,s,e);
} 

int main()
{
    int arr[5] = {1,5,7,9,2};
    int n = 5;

    mergeSort(arr, 0 ,n-1); // 0->start,n-1 -> end

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}