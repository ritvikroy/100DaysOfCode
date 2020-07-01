class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> vec;
        unordered_map<int, int> umap;
        
        for(int i = 0; i < nums.size(); i++) {
            umap[nums[i]]++;
        }
        for(int j = 1; j <= nums.size(); j++) {
            if(umap[j] == 0) vec.push_back(j);
        }
    return vec;   
    }
};
