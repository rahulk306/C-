#include<bits/stdc++.h>
using namespace std;

string reverseWords(string S) 
{ 
    stack<string> st;
    string temp = "";
    
    for(int i=0; i<S.size(); i++)
    {
        if(S[i] == '.')
        {
            st.push(temp);
            temp = "";
        }
        else temp.push_back(S[i]);
    }
    
    if(temp != "") st.push(temp);
    temp = "";
    
    while(st.size())
    {
        temp+=st.top();
        st.pop();
        
        if(st.size() != 0)
        temp.push_back('.');
    }
    return temp;
} 