class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> res;
        unordered_set<int> uset;
        
       for(int i = 0; i < matrix.size(); i++) {
           int mn = INT_MAX;
           for(int j = 0; j < matrix[0].size(); j++) mn = min(mn, matrix[i][j]);
           uset.insert(mn);
       }
          for(int j = 0; j < matrix[0].size(); j++) {
           int mx = INT_MIN;
           for(int i = 0; i < matrix.size(); i++) mx = max(mx, matrix[i][j]);
           if(uset.find(mx) != uset.end()) res.push_back(mx); 
       }
        return res;
    }
};
