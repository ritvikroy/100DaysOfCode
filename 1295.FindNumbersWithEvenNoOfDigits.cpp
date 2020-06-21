class Solution {
public:
    int checkEven(int num) {
        int count = 0;
        while(num > 0){
            count++;
            num /= 10;
        }
        return count;
    }
    int findNumbers(vector<int>& nums) {
        int sum = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(checkEven(nums[i]) % 2 == 0) sum++;
        }
        return sum;
    }
};
