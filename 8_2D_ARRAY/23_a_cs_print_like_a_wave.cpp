#include<bits/stdc++.h>
using namespace std;
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    // printing in wave order means to print the first column elemenet from top to bottom and then from bottom to top in continous fashion.
    
    vector<int> ans;
    for(int col=0; col<mCols; col++) // we have to traverser column wise.
    {
        if(col&1) // for odd index->  bottom to top
        {
            for(int row=nRows-1;row>=0;row--)
            {
                ans.push_back(arr[row][col]);
            }
        }
        else  //for even or 0 index-> top to bottom.
        {
            for(int row=0;row<nRows;row++)
            {
                ans.push_back(arr[row][col]);
            }
        }
    }
    return ans;
}