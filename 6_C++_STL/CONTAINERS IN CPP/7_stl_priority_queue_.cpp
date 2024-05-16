/*Priority queues are a type of container adapters, specifically designed such that the first element of the queue is either the greatest or the smallest of all elements in the queue and elements are in nonincreasing order (hence we can see that each element of the queue has a priority {fixed order}). However in C++ STL, by default, the top element is always the greatest element. We can also change it to the smallest element at the top. Priority queues are built on the top to the max heap and uses array or vector as an internal structure.

Note: By default, C++ creates a max-heap for priority queue. */

#include<iostream>
#include<queue>
using namespace std;
int main()
{
    // max heap
    priority_queue<int> maxi; //when we will print the elements of the maxi heap this will print the element in the decending order.

    // min heap
    priority_queue < int , vector<int> , greater<int> > mini;
    
    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);

    cout<<"size of maxi: "<<maxi.size()<<endl;
    int n = maxi.size();
    for(int i=0;i<n;i++)
    {
        cout<<maxi.top()<<" ";
        maxi.pop();   // while popping, the maximum element in the queue i.e., the largest element will be popped out.
    }
    cout<<endl;

    mini.push(5);
    mini.push(1);
    mini.push(0);
    mini.push(4);
    mini.push(3);
    mini.push(3);

    int m = mini.size();
    for(int i=0;i<m;i++)
    {
        cout<<mini.top()<<" ";
        mini.pop();  // while popping, the minimum element in the queue i.e., the smallest element will be popped out.
    }cout<<endl;

    cout<<"empty or not: "<<mini.empty()<<endl;
}