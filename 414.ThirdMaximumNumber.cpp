class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long max = LONG_MIN;
        long secondMax = LONG_MIN;
        long thirdMax = LONG_MIN;
        
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == max || nums[i] == secondMax || nums[i] == thirdMax) continue;
            
            if(nums[i] > max) { 
                thirdMax = secondMax;
                secondMax = max;
                max = nums[i];
            }
            else if(nums[i] > secondMax) {
                thirdMax = secondMax;
                secondMax = nums[i];
            }
            else if(nums[i] > thirdMax) thirdMax = nums[i];
        }
        return thirdMax == LONG_MIN ? max: thirdMax;
    }
};
