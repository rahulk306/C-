#include<iostream>
using namespace std;
int main()
{
    int row;
    cout << "enter the number of row: ";
    cin >> row;
    int i=1;
    while(i<=row)
    {
        int j=1;
        char ch = 'A' + i -1 ;
        while(j<=row)
        {
            cout<< ch <<" ";
            ch++;
            j++;
        }
        cout<<"\n"; 
        i++;
    }
}