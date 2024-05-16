#include<iostream>
#include<string.h>
using namespace std;

// fun to check whether a string is palindrome or not.
bool checkPalindrome(string a, int n)
{
    int s = 0;
    int e = n-1;
    
    while(s<=e)
    {
        if( a[s]!=a[e] && (a[s]>='a'&&a[s]<='z' || a[s]<='9'&&a[s]>='0') )
        return 0;  // not palindrome
        else
        {
            s++;
            e--;
            if( a[s] >='a'&&a[s]<='z' || a[s]<='9'&&a[s]>='0')
            {
                
            }
            else s++;
            if( a[e]>='a'&&a[e]<='z' || a[e]<='9'&&a[e]>='0')
            {

            } 
            else e--;
        }
    }
    return 1;   // palindrome
}

bool valid(char ch)
{
    if( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9') )
    return 1;
    else
    return 0;
}

// fun to convert all uppercase elements if exist in the strint to lower case.
string to_lower(string a,int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]>='a' && a[i]<='z')
        continue;
        else if(a[i]<='Z' && a[i>='A'])
        {
            a[i] = a[i] - 'A' + 'a';
        }
    }
    return a;
}

int main()
{
    string name;
    cin>>name;
    name=to_lower(name,name.size());

    // faltu character hta do 
    string temp = "";
    for(int i=0;i<name.length();i++)
    {
        if(valid(name[i]))
        {
            temp.push_back(name[i]);
        }
    }
    cout<<temp<<endl;

    cout<<name<<endl;
    cout<<checkPalindrome(temp,temp.size())<<endl;
}