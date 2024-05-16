#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    cout<<s;
    int k = 2;
    for(int i=0; i<k; i++)
    s.push_back('k');
    cout<<s;
}