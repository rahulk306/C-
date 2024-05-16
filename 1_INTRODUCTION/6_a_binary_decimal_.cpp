// this program will not hold well for the large numbers.

#include<iostream>
#include<math.h>
using namespace std;
int main()


{
    int decimal;
    cout<<"enter the decimal number to convert into binary: ";
    cin>>decimal;
    
    int ans = 0;
    int i = 0;
    while(decimal!=0) // when all the number will be zero then all the bits will also be zero.
    {
        int bit = decimal & 1; // return the dot of the last digit of decimal with 1. If the last digit of deciaml is 1 then its dot with 1 will also be 1. otherwise 0.
        ans = (bit * pow(10,i)) + ans;
        decimal = decimal>>1; // we are right shifting the bits of the decimal with one bit.
        i++;

    }
    cout << "Binary form of the decimal "<<decimal<<" is "<<ans<<endl;
}