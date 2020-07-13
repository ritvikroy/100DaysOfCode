class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count = 0;
        unordered_map<int, int> umap;
        for(int i = 0; i < nums.size(); i++) count += umap[nums[i]]++;
        return count;
    }
};
