class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& M) {
         int R = M.size(), C = M[0].size();
        vector<int> d{-1, 0, 1};
        vector<vector<int>> res(R, vector<int>(C, 0));
        for(int i = 0; i < R; ++i) {
            for(int j = 0; j < C; ++j) {
                int sum = 0, count = 0;
                for(int k = 0; k < 3; ++k) {
                    for(int l = 0; l < 3; ++l) {
                        int m = i+d[k], n = j+d[l];
                        if(m >= 0 && m < R && n >= 0 && n < C) ++count, sum += M[m][n];
                    }
                }
                res[i][j] = sum/count;
            }
        }
        return res;
    }
};
