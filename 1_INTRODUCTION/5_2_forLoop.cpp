#include<iostream>
using namespace std;
int main()
{
    for (int i=0,j=0 ; i<5 && j<5 ; i++,j++) // we can use multiple variable at a time in for loop.
    {
        cout<<i<<" "<<j<<"\n";;
    }
    // we can also initilize the variavle value outside the loop, give condition inside the loop as break, can increment or decrement the variables outside the loop.

    int k=1;
    for( ; ; )
    {
        if(k<5)
            cout<<k<<"\n";
        else
            break;
        k++;
    }

}
    