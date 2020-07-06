class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> shuffle;
        for(int i = 0, j = n; i < nums.size()/2, j < nums.size(); i++, j++) {
            shuffle.push_back(nums[i]);
            shuffle.push_back(nums[j]);
        }
        return shuffle;
    }
};
