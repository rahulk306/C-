#include<iostream>
using namespace std;

inline int getMax(int& a,int& b)  // if our funcion is of only one line then we can use inline keyword to make the function one liner. it reduces the memory use for the particular function and also increases code readability.
{
    return (a>b)? a:b;
}

int main()
{
    int  a = 1, b = 2;
    cout<<getMax(a,b)<<endl;
}