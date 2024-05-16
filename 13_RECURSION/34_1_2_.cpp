#include<iostream>
using namespace std;

void reverse(string &arr , int start)   // s-> start, e->end
{
    cout<<arr<<endl;
    if(start > arr.length()-1-start) return;
    
    swap(arr[start],arr[arr.length()-1-start]); start++;
    reverse(arr,start);
    
}
int main()
{
    string arr = "rahulk";
    reverse(arr,0);
    cout<<arr<<endl;
    return 0;
}