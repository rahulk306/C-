#include<bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();
        
        int count = 0;  // keeping the count of the number of elements printed.
        int total = row*col; // getting the total number of elements in the matrix.
        
        // index initialisation
        int startingRow = 0;
        int startingCol = 0;
        int endingRow = row-1;
        int endingCol = col-1;
        
        while(count<total)
        {
            //print starting row
            for(int index = startingCol; count<total && index<=endingCol; index++)
            {
                ans.push_back(matrix[startingRow][index]);
                count++;
            }
            startingRow++;
            
            //print ending column
            for(int index = startingRow; count<total && index<=endingRow; index++)
            {
                ans.push_back(matrix[index][endingCol]); count++;
            }
            endingCol--;
            
            //print ending row
            for(int index=endingCol; count<total && index>=startingCol; index--)
            {
                ans.push_back(matrix[endingRow][index]); count++;
            }
            endingRow--;
            
            //print starting column
            for(int index=endingRow; count<total && index>=startingRow; index--)
            {
                ans.push_back(matrix[index][startingCol]); count++;
            }
            startingCol++;
            
        }
        return ans;
    }