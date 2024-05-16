#include<bits/stdc++.h>
using namespace std;

int findSubString(string str)
{
    unordered_set<char> s;
    for(int i=0; i<str.size(); i++) s.insert(str[i]);
    
    int n = s.size(); 
    int ans = str.size();
    
    int i=0, j=0;
    unordered_map<char, int> m;
    
    while(i<str.size())
    {
        m[str[i]]++;
        if(m.size() == n)
        {
            while(m.size() == n)
            {
                ans = min(ans, i-j+1);
                m[str[j]]--;
                if(m[str[j]] == 0) m.erase(str[j]);
                j++;
            }
            
        }
        i++;
    }
    return ans;
    
}