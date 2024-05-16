#include<iostream>
using namespace std;
int main()
{
    int row;
    cout << "enter the number of row: ";
    cin >> row;
    int i=1;char ch = 'A';
    while(i<=row)
    {
        int j=1;
        
        while(j<=i)
        {
            cout<<ch<<" ";
            
            j++;
        }
        cout<<"\n"; 
        i++;ch++;
    }
}