// stack is a data structure based on lifo principle.

#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<string> s;

    cout<<s.size()<<endl;

    s.push("rahul");
    s.push("rittik");
    s.push("praveen");

    cout<<"size of stack: "<<s.size()<<endl;
    cout<<"Top element: "<<s.top()<<endl;

    s.pop(); // it remove the top element i.e., praveen;
    cout<<"size of stack: "<<s.size()<<endl;
    cout<<"top element: "<<s.top()<<endl;

    cout<<"empty or not: "<<s.empty()<<endl;

}