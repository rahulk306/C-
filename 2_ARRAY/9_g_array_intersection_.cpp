#include<iostream>
using namespace std;

void arr_inter(int arr1[],int size1,int arr2[],int size2)
{
    if(size1>=size2)
    {
        for(int i=0;i<size1;i++)
        {
            int count = 0;
            for(int j=0; j<size2;j++)
            {
                if(arr2[j] != INT_MIN)
                {
                    if(arr1[i] == arr2[j])
                    {
                        arr2[j] = INT_MIN;
                        count++;
                    }    
                }           
            }
            if(count>0)
            {
                cout<<arr1[i]<<" ";
            }    
        }
    }
    else
    {
       for(int i=0;i<size2;i++)
        {
            int count = 0;
            for(int j=0; j<size1;j++)
            {
                if(arr2[j] != INT_MIN)
                {
                    if(arr1[i] == arr2[j])
                    {
                        arr2[j] = INT_MIN;
                        count++;
                    }    
                }           
            }
            if(count>0)
            {
                cout<<arr1[i]<<" ";
            }    
        } 
    }
}

int main()
{
    int size1,size2;

    cout<<"enter the size of 1st array: ";
    cin>>size1;
    int arr_1[size1];
    cout<<"enter the elements of 1st array: ";
    for(int i=0;i<size1;i++)
    {
        cin>>arr_1[i];
    }

    cout<<"enter the size of 2nd array: ";
    cin>>size2;
    int arr_2[size2];
    cout<<"enter the elements of 2nd array: ";
    for(int i=0;i<size2;i++)
    {
        cin>>arr_2[i];
    }

    arr_inter(arr_1,size1,arr_2,size2);
}