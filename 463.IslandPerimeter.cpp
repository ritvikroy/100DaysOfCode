class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int result = 0;
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(grid[i][j] == 1) {
                    result += 4;
                if(i > 0  && grid[i-1][j] == 1 ) result -= 2;
                if(j > 0  && grid[i][j - 1] == 1 ) result -= 2;
                }
            }
        }
        return result; 
    }
};
