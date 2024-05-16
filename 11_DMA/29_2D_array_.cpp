#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"enter the number of rows and columns: "<<endl; 
    cin>>n>>m;
    
    int **arr = new int*[n];

    for(int i=0;i<n;i++)
    {
        arr[i] = new int[n];
    }
    
    // creation done
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    // display
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<"\t";
        }cout<<endl;
    }
     
    //releasing memeory
    for(int i=0;i<n;i++)
    {
        delete []arr[i];
    }
    delete []arr;


}