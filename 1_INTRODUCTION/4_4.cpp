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
        char ch = 'A' + row -i;
        while(j<=i)
        {
            cout<< ch <<" ";
            ch++;
            j++;
        }
        cout<<"\n"; 
        i++;
    }
}