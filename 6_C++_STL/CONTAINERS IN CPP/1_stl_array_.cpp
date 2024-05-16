#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int,4> a = {1,2,3,4};  // stl declaration of array. 
    int size = a.size();

    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    cout<<a[0]<<endl;

    // we can use .at() to get the value stored at that index in the stl array.
    cout<<"element at 2nd index :"<<a.at(2)<<endl;

    cout<<"empty or not : "<<a.empty()<<endl;

    cout<<"first element: "<<a.front()<<" end element: "<<a.back()<<endl;

}
