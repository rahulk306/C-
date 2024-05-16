#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;

int main()
{
    // creation 
    unordered_map<string,int> m;

    // insertion
    pair<string,int> p = make_pair("babbar",3);   // type 1 of creating pair
    m.insert(p);

    pair<string,int> pair2("love",2);  // type 2 of creating pair
    m.insert(pair2);
    
    m["mera"] = 1;  // 3
    // here "mera" key is first time in map so there is a entry marked value associated is 1;

    m["mera"] = 2;  // here "mera" value is updated from 1->2; 
    
    // there is single entry for every unique key entry.

    // search
    cout<<m["mera"] << endl;
    cout<< m.at("babbar") << endl;

    //cout<<m.at("unknownKey")<<endl;
    cout<<m["unknownKey"] << endl;
    cout<<m.at("unknownKey")<<endl;

    // size
    cout<<m.size()<<endl;

    // check entry presernt or not for any key
    cout<<m.count("love")<<endl;   // -> 1 as there is a key in the map name "love";
    cout<<m.count("rahul")<<endl;  // -> 0 as there is no key in the map named "rahul";

    // erase
    m.erase("love");
    cout<<m.size()<<endl; 

    // iterating over the map
    for(auto i:m)
        cout<<i.first<<" "<<i.second<<endl;

    // using iterator 
    unordered_map<string,int> :: iterator it = m.begin();

    while(it != m.end())
    {
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
    

}