// in deque we can perform deletion and insertion of elements at both the end.
// it is also dynamic in nature.

#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> d;

    d.push_back(1);
    d.push_front(2);
    d.push_back(3);
    d.push_front(4);
    d.push_back(5);
    d.push_front(6);

    for(int i=0;i<d.size();i++)
    {
        cout<<d[i]<<" ";
    }
    cout<<endl;

    d.pop_back();
    for(int i=0;i<d.size();i++)
    {
        cout<<d[i]<<" ";
    }
    cout<<endl;

    d.pop_front();
    for(int i=0;i<d.size();i++)
    {
        cout<<d[i]<<" ";
    }
    cout<<endl;

    cout<<"front: "<<d.front()<<endl;
    cout<<"end: "<<d.back()<<endl;

    cout<<"is empty: "<<d.empty()<<endl;

    cout<<"befor erasing the data: "<<endl;
    cout<<"size: "<<d.size()<<endl;
    for(int i=0;i<d.size();i++)
    {
        cout<<d[i]<<" ";
    }
    cout<<endl;

    d.erase(d.begin(),d.begin()+1); //we have to pass two argument from where to where we have to clear the data from the deque. 
    // we can track the first element with .begin() and last with .end() 
    cout<<"after erasing the data: "<<endl;
    cout<<"size: "<<d.size()<<endl;
    for(int i=0;i<d.size();i++)
    {
        cout<<d[i]<<" ";
    }
    cout<<endl;
}