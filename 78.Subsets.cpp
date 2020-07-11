/**
idea:

[[]] [1,2,3]
[[] [1]] [2,3]
[[] [1] [2] [1,2]] [3]
[[] [1] [2] [1,2] [3] [1,3] [2,3] [1,2,3]] []

**/

class Solution {  //cc
public:
	void helper(vector<vector<int>>& storage, vector<int>& nums)
    {
        if (nums.size() == 0) return;
        
        int n = storage.size();
        
        for (int i = 0; i < n; i++) {
            storage.push_back(storage[i]);
            storage.back().push_back(nums[0]);
        }
        nums = vector<int>(nums.begin() + 1, nums.end());

        helper(storage, nums);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res = {{}};
        helper(res, nums);
        return res;
    }
};
