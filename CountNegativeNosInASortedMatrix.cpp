class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int res = 0;
      for (int i = grid.size() - 1; i >= 0 && grid[i].back() < 0; --i)
        for (int j = grid[i].size() - 1; j >= 0 && grid[i][j] < 0; --j)
            ++res;
    return res;   
    }
};
