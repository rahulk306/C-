#include<iostream>
using namespace std;

// void bubble_sort(int arr[], int n)
// {
//     // base case
//     if(n==0 || n==1) return;

//     // 1 case solve karo -> largerst element to last me rakh do
//     for(int i=0;i<n-1;i++)
//         if(arr[i]>arr[i+1]) swap(arr[i],arr[i+1]);
    
//     // recursive call
//     bubble_sort(arr,n-1);
// }

// int main()
// {
//     int arr[6] = {1,54,5,3,465,2};
//     bubble_sort(arr,6);
//     for(int i=0;i<6;i++)
//         cout<<arr[i]<<" ";
// }

int main()
{
    string str1 = "rahul   ki"; 
    // cout<<str1;
    string str2;
    for(int i=0;i<str1.length();i++)
    str2+=str1[i];
    cout<<str2;
    str2="";cout<<str2;
    // if(str1[5])
    // {
    //     cout<<"yes:";
    // }
}