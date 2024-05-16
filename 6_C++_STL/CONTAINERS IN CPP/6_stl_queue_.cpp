// queue is based on fifo principle
#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<string> q;

    q.push("rahul");
    q.push("rittik");
    q.push("praveen");

    cout<<"size of queue: "<<q.size()<<endl;
    cout<<"first element: "<<q.front()<<endl;
    
    q.pop();
    cout<<"size of queue: "<<q.size()<<endl;
    cout<<"first element: "<<q.front()<<endl;
}