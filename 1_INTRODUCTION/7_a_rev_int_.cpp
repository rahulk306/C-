#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int rev = 0;
    while(n!=0)
    {
        int digit = n%10;
        if(rev > INT_MAX/10 || rev < INT_MIN/10)
        {
            cout<<"not compatiabla: ";
            break;
        }
        rev = (rev * 10) + digit;
        n /= 10;
    }
    cout<<rev<<endl;
}