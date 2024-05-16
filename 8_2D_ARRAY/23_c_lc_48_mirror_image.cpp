// rotate a matrix by 90degree.

#include<iostream>
#include<stdlib.h>

using namespace std;
 
int main()
{
    int row,col;
    cout<<"enter size of matrix in row*col order: "<<endl;
    cin>>row>>col;
    int matrix[row][col];

    // taking input of the matrix

    for(int i=0;i<row;i++)
    {
        cout<<"Enter data for row "<<i+1<<":"<<endl;
        for(int j=0;j<col;j++)
        {
            cin>>matrix[i][j];
        }
    }

    // printing the matrix on the console
    cout<<"The matrix you entered is: "<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }

    // converting the matric into its transpose 
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<=i;j++)  // here we are traversing in the half traingular portion of the matrx as we are swapping the elements so to prevent element to be swapped twice and reaching the same position we are traversing in the lower half of the matrix. we can traverse in the upper half also.
        {
            swap(matrix[j][i],matrix[i][j]);
        }
    }

    //printing the new matrix that is the transpose of the upper matrix
    cout<<"printing the new matrix that is the transpose of the upper matrix: "<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }

    // code for converting the matrix into its mirror image by rotating by 90 degree.
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<(col/2);j++)
        {
            swap(matrix[i][j],matrix[i][col-j-1]);
        }
    }

    cout<<"printing the mirror image of the original matrix by rotating it with 90 degree clock wise."<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }
}