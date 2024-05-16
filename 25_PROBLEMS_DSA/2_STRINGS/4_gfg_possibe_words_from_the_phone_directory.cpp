#include<bits/stdc++.h>
using namespace std;

void solve(vector<string> &ans, int a[], int n, string output, int index, string map[])
{
    if(index >= n)
    {
        ans.push_back(output);
        return;
    }
    
    int number = a[index];
    string value = map[number];
    
    for(int i=0; i<value.length(); i++)
    {
        output.push_back(value[i]);
        solve(ans, a, n, output, index+1, map);
        output.pop_back();
    }
}

vector<string> possibleWords(int a[], int N)
{
    vector<string> ans;
    string map[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    string output = "";
    int index = 0;
    solve(ans, a, N, output, index, map);
    return ans;
}