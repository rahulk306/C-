#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {1,2,3,4,5};
    char ch[6] = "abcde";

    cout<<arr<<endl; // this will print the address of the first block of the array.
    cout<<ch<<endl;   // this will print the whole character array.  
                       // this happens because the implementation of the character array is different for integer  and character array.

    char *c = ch;
    cout<<c<<endl;
    char *c1 = &ch[0];
    cout<<c1<<endl; 

    char temp = 'x';
    char *p = &temp;
    cout<<p<<endl;  // this will print useless content on the console as after printing the content stored in the temp this will point to the next memory bolck till it reaches to a null character.
}