#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout << "Enter the number of rows you want to print: \n";
    cin >> a;

    while(a>0)
    {
        b=1;
        while(b<10)
        {
            cout << b << "\t";
            b++;
        }
        a--;
        cout<<"\n";
    }
}