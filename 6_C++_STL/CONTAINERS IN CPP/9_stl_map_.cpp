// this map is based on red-black tree or any other tree so time complexity of every operation performed is of
// O(log(n)).

// unordered map is based on hashing so the operatioin performed on unordered map has tc of O(1).

// map stores data in key-value pair.

// each key is unique.
// each key will point to only one value.
// here two keys can point to one value.

// key are in sorted order in case of map or in random order in case of unordered map.

// every function defined on map have time complexity of log(n).

// 

#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string> m;

    // insertin key value pairs in the map
    m[1] = "rahul";
    m[19] = "rittik";
    m[6] = "roushan";
    m[5] = "praveen";
    m[9] = "mayank";

    cout<<"before erase : "<<endl;
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"finding 19 -> "<<m.count(19)<<endl; // it will return 1 if the element is present in the set.

    m.erase(19);  //this will delete the key 19 along with the value assigned with the key.
    cout<<"after erasing 19: "<<endl;
    for(auto i:m)
    {
        cout<<i.first<<" - "<<i.second<<endl;
    }
    cout<<endl;
    // find funciton returns the itterator of the particular element.
    auto it = m.find(6);
    for(auto i=it;i!=m.end();i++)
    {
        cout<<(*i).first<<" - "<<(*i).second<<endl;
    }
    
}