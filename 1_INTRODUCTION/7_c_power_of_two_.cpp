#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<< "enter a number: ";
    cin >> n;
    
    int i = 30;
    while(i>=0)
    {
        int ans = pow(2,i);
        if(n==ans)
        {
            cout<<"true";
            break;
        }
        i--;
    }
    cout<<"false";
}