#include<iostream>
#include<bits/stdc++.h>  // including stl library for stack
using namespace std;

int main()
{
    // creation of stack
    stack<int> s;

    // push operation 
    s.push(2);
    s.push(3);
    s.pop();
    cout<<"printing the top element "<<s.top()<<endl;
    return 0;

}