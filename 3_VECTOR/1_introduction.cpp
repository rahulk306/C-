#include<iostream>
#include<vector> // for using vector we have to include this library.
#include<bits/stdc++.h> // we have to include this header file to use sorting.
using namespace std;
int main()
{
    vector<int> v;  // initialisation of vector <type of data type of which vector is to be created> at last name of the vector.
    v.push_back(1); // this operation is used to add a element into a vector.
    v.push_back(2);
    v.push_back(3);
    v.push_back(10);
    v.push_back(9);
    v.push_back(16);
    v.push_back(5);
    v.push_back(78);
    v.push_back(90);
    
    // traversing a vector.
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<"\n"<<"traversed the vector using for loop.\n";

    // iterator method to traverse a vector
    vector<int>::iterator it; // at last it(a pointer) is the name of the iterator we declared to traverse.
    for(it=v.begin();it!=v.end();it++) // v.begin()->first element in the vector, v.end()->last element.
    {
        cout<<*it<<" ";
    }
    cout<<"\n"<<"treversed the vector using iterator method.\n";

    // using auto 
    for(auto element:v) //in this approach we don't need to identify the type of data in the vector.
    {
        cout<<element<<" "; 
    }
    cout<<"\n"<<"treversed the vector using auto approach.\n";

    // deleting an element from the vector.
    v.pop_back(); // it will remove the last element in the vector.
    for(it=v.begin();it!=v.end();it++) 
    {
        cout<<*it<<" ";
    }cout<<endl;

    // we can also specify the size of the vector at time of initalisation.

    vector<int> v2 (4,50); // size of the array will be 4 and all the four elements will be 50. 
    for(it=v2.begin();it!=v2.end();it++)
    {
        cout<<*it<<" ";
    }cout<<endl;

    swap(v,v2); // this is used to swap the data in these two vectors.

    cout<<"printing the elements of the vetor v: "<<endl;
    for(it=v.begin();it!=v.end();it++) 
    {
        cout<<*it<<" ";
    }

    cout<<"\n"<<"printing the elements of the vector v2: "<<endl;
    for(it=v2.begin();it!=v2.end();it++) 
    {
        cout<<*it<<" ";
    }cout<<endl;

    // sorting the vector
    sort(v2.begin(),v2.end());
    for(int i=0; i<v2.size();i++)
    {
        cout<<v2[i]<<" ";
    }

}