// instead of writing codes for many operations we can just include a library named <algorithm> and easily use many operations

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);

    // we have to keep in mind that for implementation of binary search the array should be in sorted format.
    cout<<"finding 6 -> "<<binary_search(v.begin(),v.end(),6)<<endl;

    // rotating vector
    rotate(v.begin(),v.begin()+2,v.end());
    cout<<"after roataing : "<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }

    // sorting a vector
    sort(v.begin(),v.end()); // this sorting algorithm is based to the use of the three algorithms insertion sort, quick sort and heap sort and the sorting algorithm is called intro sort algorithm.

}