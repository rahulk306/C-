#include<bits/stdc++.h>
using namespace std;

int row, col;
int sx, sy;
int ex, ey;

bool isSafe(int newx, int newy, vector<vector<bool>> &vis, vector<vector<int>> &arr, int &count2)
{
    if ( (newx >= 0 && newx < row) && (newy >= 0 && newy < col) && vis[newx][newy] != 1 && arr[newx][newy] == 0) return true;
    else if( (newx >= 0 && newx < row) && (newy >= 0 && newy < col) && vis[newx][newy] != 1 && arr[newx][newy] == 2 )
    {
        if(count2<2) 
        {
            count2++;
            return true;
        }
    }
    return false;
}

void solve(int x, int y, vector<int> &ans, vector<vector<bool>> &vis, int path)
{
  // base case
  if(x == ex && y == ey)
  {
    ans.push_back(path);
    return;
  }

  vis[x][y] = 1;
  // DOWN
  if (isSafe(x + 1, y, vis, arr, n))
    solve(x + 1, y, arr, n, ans, vis, path + 'D');

  // LEFT
  if (isSafe(x, y - 1, vis, arr, n))
    solve(x, y - 1, arr, n, ans, vis, path + 'L');

  // RIGHT
  if (isSafe(x, y + 1, vis, arr, n))
    solve(x, y + 1, arr, n, ans, vis, path + 'R');

  // UP
  if (isSafe(x - 1, y, vis, arr, n))
    solve(x - 1, y, arr, n, ans, vis, path + 'U');

  vis[x][y] = 0; // make vis[x][y] = 0 while returning
}

int main()
{
  cin>>row>>col;

  vector<vector<int>> arr(n, vector<int>(n));
  for(int i=0; i<row; i++)
  {
    for(int j=0; j<col; j++) cin>>arr[i][j];
  }

  cin>>sx>>sy;
  cin>>ex>>ey;

  vector<int> ans;
  vector<vector<bool>> visited(row, vector<bool>(col, 1)); // visited matrix

  if (m[0][0] == 1) cout<<"STUCK";
  solve(sx, sy, ans, visited, 0);

  return ans;
}