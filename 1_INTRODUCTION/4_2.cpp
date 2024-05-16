// printing pattern star

#include<iostream>
using namespace std;
int main()
{
    int row,i=1,j;
    cout<<"etner the number of rows to print: \n";
    cin >> row;
    int k=1;
    char ch='A';
    while(i<=row)
    {
        j=1;
        while(j<=i)
        {
            cout << ch << " " ;
            j++;k++;ch +=1;
        }
        i++;
        cout << "\n";
    }
}