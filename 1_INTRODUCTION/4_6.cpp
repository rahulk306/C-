#include<iostream>
using namespace std;
int main()
{
    int row;
    cout << "enter the number of row to print: \n";
    cin >> row;
    int i = row;
    while(i>1)
    {
        int column = 1;
        while(column<i) // for printing the first triangle of numbers.
        {
            cout << column<<" ";
            column++;
        }

        int star = 1;
        while(star < 2*(row-i+1)) // for printing the second trinagle consisting of the stars.
        {
            cout<<"* ";
            star++;
        }

        int column2 = i-1;
        while(column2>0)  // for printing the third triangle consisting of numbers. 
        {
            cout<<column2<<" ";
            column2--;
        }

        cout<<"\n";
        i--;
    }
}