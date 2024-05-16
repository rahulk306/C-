// in set duplicate elements get ignored.
// print the output in sorted manner.
// it is based on bst. -> so the time complexity of insert,erase,find,count all () is log(n).
// it is a little slower than unordered set as it stores the elements in sorted manner
// in set we can only insert or delete any element we cannot modify the elements present in the set.

#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(4);
    s.insert(3);
    s.insert(3);
    s.insert(7);
    s.insert(8);
    s.insert(3);
    s.insert(4);
    s.erase(5);  // this will erase 5 from the set ans also the size of the set will be decreased by 1.

    cout<<"size of set s is: "<<s.size()<<endl;
    for(auto i:s)
    {
        cout<<i<<endl;
    }cout<<endl;

    s.erase(s.begin());  // this will erase the element present at the beginning in the set.
    for(auto i:s)
    {
        cout<<i<<endl;
    }cout<<endl;


    s.insert(9);
    s.insert(10);

    for(auto i:s)
    {
        cout<<i<<endl;
    }cout<<endl;
    cout<<"4 is present or not in the set -> "<<s.count(4)<<endl;

    set<int>::iterator itr = s.begin();
    cout<<*itr<<endl;   // this will print the value present in the beginning of the set.

    set<int>::iterator it=s.find(4); // this returns the address of the element if it is presernt in the set.
    cout<<"This will print the element if it is present -> "<<*it<<endl;
    for(auto itt=it;itt!=s.end();itt++)
    {
        cout<<*itt<<" ";
    }
}