// we can obtain the square root of the required number with more precision.

#include<iostream>
using namespace std;

long long int nearest_int(int n)
{
    long long int s = 0;
    long long int e = n;    // from s=0 to e=n we are declaring our search space means our answer is within this limit.
    long long int mid = s + (e-s)/2;
    long long int ans = -1;
    while(s<=e)
    {
        long long int square = mid*mid; // here we are using long long int in place of int as if in any case if mid*mid becomes greaten than the upper limit of int such that it can't be kept in any int variabe, then our code will give error. So to be safe we are using long long int in place of int.

        if(square == n)
            return mid;
        if(square > n)
            e = mid - 1;
        else
        {
            ans = mid;    // we are storing these values as if we didn't find the exact sq root, we will return the nearest interger value to that root.
            s = mid + 1;
        }
        mid = s + (e-s)/2;
        
    }return ans;
}

double morePrcision(int n,int precision, int nearest_int)
{
    double factor = 1;
    double ans = nearest_int;

    for(int i=0; i<precision; i++)
    {
        factor = factor/10;
        for(double j=ans; j*j<n; j=j+factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    long long int n; 
    cout<<"Enter a number to find its square root: ";
    cin>>n;
    // cout<<"Square root of "<<n<<" is "<<nearest_int(n)<<endl;
    // int near = nearest_int(n);
    cout<<"Square root of "<<n<<" is "<<morePrcision(n,4,nearest_int(n))<<endl;
}