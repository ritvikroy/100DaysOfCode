class Solution {
public:
    int majorityElement(vector<int>& nums) {
    unordered_map<int, int> umap;
    for (int i = 0; i < nums.size(); i++) umap[nums.at(i)]++;       
    for (int i = 0; i < nums.size(); i++) {
        if(umap[nums.at(i)] > nums.size()/2) return nums.at(i);
        }
        return -1;    
    }
};
