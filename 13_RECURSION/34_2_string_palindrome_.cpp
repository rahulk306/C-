#include<iostream>
using namespace std;

bool check_palindrome(string arr, int s, int e)
{
    if(s>e) return true; // means all the string is palindrome.
    if(arr[s]!=arr[e]) return false;
    else return check_palindrome(arr,s+1,e-1);
}

int main()
{
    string arr = "madam";
    cout<<check_palindrome(arr,0,arr.length()-1);
}