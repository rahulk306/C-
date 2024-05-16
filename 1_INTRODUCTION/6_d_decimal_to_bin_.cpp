#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int binary;
    cout<<"enter a binary number: ";
    cin>>binary;

    int decimal = 0;
    int i = 0;
    while(binary != 0)
    {
        int digit = binary % 10;
        decimal += digit * pow(2,i);
        binary /= 10;
        i++;
    }
    cout<<"Decimal form of is: "<<decimal<<endl;

}