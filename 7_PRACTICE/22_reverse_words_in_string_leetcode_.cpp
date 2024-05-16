#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string arr;
    getline(cin,arr);
    cout<<arr<<endl;

    cout<<arr.length()<<endl;

    int i=0;
    int j=0;
    while(i<arr.length())
    {
        while( j<arr.length() && arr[j]!=' ' )
        {
            j++;
        }
        reverse(arr.begin()+i,arr.begin()+j);
        i = j+1;  // now i will be pointing to the first letter of next word.
        j = i;    // again it will start traversing the array with i = j.
    }
    cout<<arr<<endl;
}