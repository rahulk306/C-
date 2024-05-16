#include<iostream>
using namespace std;

void reverse(string &arr, int s, int e)   // s-> start, e->end
{
    cout<<arr<<endl;
    if(s>e) return;  // base case
    swap(arr[s],arr[e]); e--; s++;
    reverse(arr,s,e);
}

int main()
{
    string arr = "rahulk";
    reverse(arr,0,arr.length()-1);
    cout<<arr<<endl;
    return 0;
}