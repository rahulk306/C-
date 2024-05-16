#include<iostream>
using namespace std;
int main()
{
    int row;
    cout<<"enter the number of rows: "<<endl;
    cin>>row;
    
    int **arr = new int*[row];

    int *jag = new int[row];
    for(int i=0;i<row;i++)
    {
        cout<<"enter the number of elements to put in row "<<i+1<<endl;
        cin>>jag[i];
    }

    for(int i=0;i<row;i++)  // here we are allocationg memory for array in each element of the *int[row],that we created earlier;
    {
        arr[i] = new int[jag[i]];
    }

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<jag[i];j++)
        {
            cout<<"enter the element at pos: "<<i+1<<","<<j+1<<": ";
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<jag[i];j++)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
}