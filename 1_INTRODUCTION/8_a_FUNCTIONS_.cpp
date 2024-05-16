// total number  of notes required to sum a money.

#include<iostream>
using namespace std;
int main()
{
    int sum;
    cout<<"enter the sum of money: ";
    cin>>sum;

    int hun = sum/100;

    int fif = (sum%100)/50;

    int twe = ((sum%100)%50)/20;

    int one = (((sum%100)%50)%20)/1;

    cout<<"100's: "<<hun<<"  50's: "<<fif<<"  20's: "<<twe<<"  1's: "<<one<<endl;


}