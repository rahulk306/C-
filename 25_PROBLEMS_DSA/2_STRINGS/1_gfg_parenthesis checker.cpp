#include<bits/stdc++.h> 
using namespace std;

bool ispar(string x)
{
    stack<char> s;
    s.push(x[0]);
    for(int i=1; i<x.size(); i++)
    {
        if(s.size() != 0) 
        {
            if(x[i] == '(' and s.top() == ')') s.pop();
            else if(x[i] == '{' and s.top() == '}') s.pop();
            else if(x[i] == '[' and s.top() == ']') s.pop();
            else if(x[i] == ')' and s.top() == '(') s.pop();
            else if(x[i] == '}' and s.top() == '{') s.pop();
            else if(x[i] == ']' and s.top() == '[') s.pop();
            else s.push(x[i]);
        }
        else s.push(x[i]);
    }
    if(s.size()==0) return true;
    return false;
}