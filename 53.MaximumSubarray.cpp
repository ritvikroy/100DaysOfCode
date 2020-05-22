class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max = INT_MIN;
        int sum = 0;
        if (nums.size() == 1) return nums[0];
        for(int i = 0; i < nums.size(); i++) {
            sum = nums[i];
            for(int j = i + 1; j < nums.size(); j++) {
                if (sum > max) {
                    max = sum;
                }
                sum += nums[j];
                if (sum > max) {
                    max = sum;
                }     
            }
        }
        if (sum > max) max = sum;
        return max;
    }
};
