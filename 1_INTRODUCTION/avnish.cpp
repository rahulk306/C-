#include<iostream>
using namespace std;

// int count(int n)
// {
//     static int counter = 0;
//     if(n>0)
//     {
//         counter++;
//         n = n/10;
//         count(n);
//     }
//     else
//     {
//         return counter;
//     }
// }

// int main()
// {
//     cout<<count(152)<<endl;
// }
int main()
{
    int a = 5;
    int b = 3;
    cout<<a<<endl;
    cout<<(double)a/(double)b<<endl;
    double c = (double)a/(double)b;
    cout<<c<<endl;
}