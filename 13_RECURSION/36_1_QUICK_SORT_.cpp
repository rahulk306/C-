#include<iostream>
using namespace std;

int partition(int arr[], int s , int e)
{
    int pivot = arr[s];

    // pta kr lete hai ki kitne elements small hai pivot se
    int count = 0;
    for( int i = s+1 ; i<=e ; i++ )
    {
        if( arr[i]<=pivot ) count++;
    }

    int pivot_index = s + count; // pivot_index pr hm pivot ko place kr denge.

    // placing pivot element at its right position.
    swap(arr[s],arr[pivot_index]);

    // ab pivot ke right aur left part so conditiion ke according arrange kr lete hai. in left part all elements should be less than pivot and greater in right part.
    int i = s, j = e;

    while( i<pivot_index && j>pivot_index )
    {
        while( arr[i] <= pivot ) i++;
        while( arr[j] > pivot ) j--;

        if( i < pivot_index && j > pivot_index) 
        {
            swap(arr[i++],arr[j--]);
        }
    } 

    return pivot_index;

}

void quickSort(int arr[], int s, int e)
{
    // base case
    if(s>=e) return;

    // partition karna hai
    int p = partition(arr,s,e);    // here partition() will return the correct index for the pivot in the array.

    // lest part sort karna hai
    quickSort(arr,s,p-1);

    // right part sort karna hai
    quickSort(arr,p+1,e);
}

int main()
{
    int arr[8] = {1,5,3,6,2,8,9,7};
    int n = 8;

    quickSort(arr,0,n-1);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}