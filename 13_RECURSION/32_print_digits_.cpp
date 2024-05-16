#include<iostream>
using namespace std;

void print(int n)
{
    string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    
    if(n==0) return;
    print(n/10);
    cout<<arr[n%10]<<" ";
}

int main()
{
    int n;
    cout<<"enter digit: "<<endl;
    cin>>n;
    print(n);
}