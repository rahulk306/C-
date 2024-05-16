#include<iostream>
#include<map>
using namespace std;
int main()
{
    
        int n;
        cout<<"enter the number of elements: "<<endl;
         cin>>n;
        int arr[n];
        map<int,int> m;
        cout<<"enter the elements: "<<endl;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            m[arr[i]]++; // this will increase the count of each unique element in the map and store the count as value of each unique element as a key.
        }
        long long int ans = 0;
        for(auto i:m)
        {
            cout<<i.first<<" "<<i.second<<endl;
        }

    
}