#include<iostream>
using namespace std;

void print(int n)
{
    if(n==0) return ;
    
    print(n-1);
    cout<<n<<" ";     // this is called head recursion as we are calling the re-function before processing.
}

int main()
{
    int n;
    cin>>n;
    print(n);
}