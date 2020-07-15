class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> res; 
        for(int i = 0; i < nums.size(); i++) {
            int count = 0;
            int j = i;
            while(j--) if(nums[i] > nums[j]) count++;
            for(int k = i + 1; k < nums.size(); k++) {
                if(nums[i] > nums[k]) count++;
            }
            res.push_back(count);
        }
        return res;
    }
};
