#include <iostream>
using namespace std;

void duplicate_unique(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        
        if (arr[i] != INT_MIN)
        {
            int count = 1;
            for (int j = i+1; j < size; j++)
            {
                if(arr[i]==arr[j])
                {
                    count++;
                    arr[j] = INT_MIN;
                }
            }
            if(count>1)
            {
                cout<<arr[i]<<" is duplicate and it is "<<count<<" times presetn in the array."<<endl;
            }
            if(count == 1)
            {
                cout<<arr[i]<<" is a unique element present in the array. "<<endl;
            }
        }
        
    }
}

int main()
{
    int arr[5];
    cout << "enter the elements of the array: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    duplicate_unique(arr,5);
}