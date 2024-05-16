// vector is like a dynamic array. When ever it get short of its size it creates a another vector with the same name with capacity 2 times the previous one and copy all data from the old one to the new one and at last free the old vector.


#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    cout<<"capacity -> "<<v.capacity()<<endl;
    cout<<"size -> "<<v.size()<<endl;

    v.push_back(1);
    cout<<"capacity -> "<<v.capacity()<<endl;
    cout<<"size -> "<<v.size()<<endl;

    v.push_back(2);
    cout<<"capacity -> "<<v.capacity()<<endl;
    cout<<"size -> "<<v.size()<<endl;

    v.push_back(3);
    cout<<"capacity -> "<<v.capacity()<<endl;
    cout<<"size -> "<<v.size()<<endl;

    v.push_back(4);
    cout<<"capacity -> "<<v.capacity()<<endl;
    cout<<"size -> "<<v.size()<<endl;

    cout<<v.at(2)<<endl;

    cout<<"front: "<<v.front()<<endl;
    cout<<"last: "<<v.back()<<endl;

    cout<<"before pop elements in the vector: "<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    v.pop_back(); // it will remove the last element from the vector.
    cout<<"after poping the elements in the vector: "<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    vector<int> v2(v); // here a v2 named vector is created and all the data from the vector v is copied to this.
    for(int i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<" ";
    }
    cout<<endl;

    vector<int> v3(5,1);
    for(int i=0;i<v3.size();i++)
    {
        cout<<v3[i]<<" ";
    }
    cout<<endl;

    v3.clear();
    cout<<"printing the elements in the v3 vector after clearing the vector: "<<endl;
    for(int i=0;i<v3.size();i++)
    {
        cout<<v3[i]<<" ";
    }
    cout<<endl;
}