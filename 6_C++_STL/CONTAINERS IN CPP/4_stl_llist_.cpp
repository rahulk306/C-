// this same as doubly linked list, we need two pointers and direct access to any element is not possible we have to traverse the list to go to that element.

#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> l;
    
    l.push_back(1);
    l.push_front(2);
    l.push_back(3);
    l.push_front(4);

    cout<<"elements in the list l is: "<<endl;
    for(int i:l) // to ittrate the list.
    {
        cout<<i<<" ";
    }cout<<endl;

    l.erase(l.begin());
    cout<<"after erase the list: "<<endl;
    for(int i:l)
    {
        cout<<i<<" ";
    }cout<<endl;
}