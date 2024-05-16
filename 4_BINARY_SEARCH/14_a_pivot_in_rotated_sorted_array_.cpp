// we have to find the pivot element in the sorted rotated array given as input.
// after learning this concept we will attempt a question named (search in rotated sorted array, codestudio).

#include<iostream>
using namespace std;

int getPivot(int arr[],int n)  // here we have taken n as size of the array.
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e-s)/2;
    while(s<e)
    {
        if(arr[mid] >= arr[0])  // means the mid element is on the first line of the array.
            s = mid + 1;
        else                    // means the mid element is on the second line of the array.
            e = mid;
        mid = s + (e-s)/2;
    }
    return s; // we can return any of  s ans e, as both will be pointing to the same index.

}

int main()
{
    int arr[] = {6,7,8,9,1,2,3,4,5};
    cout<<"Pivot in the array is at index : "<<getPivot(arr,sizeof(arr))<<endl;
}