class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
         string prefix = "";
        if(strs.empty()) return prefix;
        for(int j = 0; j < strs[0].length(); ++j)
        {
            for(int i = 1; i < strs.size(); ++i){
                if(j >= strs[i].size() || strs[i][j] != strs[0][j])
                   return prefix;
            }
            prefix += strs[0][j];
        }
        return prefix;
    }
};
