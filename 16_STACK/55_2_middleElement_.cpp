#include<iostream>
#include<stack>
using namespace std;

int solve(stack<int> s, int count, int size)
{
    if(count == size/2)
    {
        return s.top();
    }
    else
    {
        int num = s.top();
        s.pop();
        solve(s,count+1,size);
        s.push(num);
        return 0;
    }
}

int middle(stack<int> s, int size)
{
    int count = 0;
    return solve(s,count,size);
}

int main()
{
    stack<int> s;
    int top = -1;
    int i = 1;
    while(i)
    {
        int temp;
        cout<<"push element in the stack "<<endl;
        
        cin>>temp;
        s.push(temp);
        cout<<"to exit insertion enter 0 else 1 "<<endl;
        cin>>i;
        cout<<" middle element in the stack is: "<<middle(s,s.size())<<endl;
    }
}
