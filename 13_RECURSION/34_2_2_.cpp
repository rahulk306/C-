#include<iostream>
using namespace std;

bool check_palindrome(string arr, int s) // here s is taken as starting index.
{
    if(s> arr.length()-1-s) return true; // means all the string is palindrome.

    if(arr[s]!=arr[arr.length()-1-s]) return false;

    else return check_palindrome(arr,s+1);
}

int main()
{
    string arr = "madam";
    cout<<check_palindrome(arr,0);
}