#include<iostream>
using namespace std;

void a(int& i)
{
    char ch = 'a';
    cout<<i<<endl;
    i++;
}

int main()
{
    int i=5;
    cout<<i<<endl;
    a(i);
    cout<<i<<endl;
    // cout<<ch<<endl;  -> this will give error as ch is  not defined in the scope of this function``1  
}