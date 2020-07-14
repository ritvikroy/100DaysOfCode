class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int greatest = 0;
        vector<bool> nums;
        
        for(int i = 0; i < candies.size(); i++) {
            if(candies[i] > greatest) greatest = candies[i];
        }
        
        for(int j = 0; j < candies.size(); j++) {
            if(candies[j] + extraCandies >= greatest) nums.push_back(true);
             else nums.push_back(false);
        }
        return nums;
        
    }
};
