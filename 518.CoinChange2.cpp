class Solution {
public:
    int change(int amount, vector<int>& coins) {
        vector<int> dp(amount+1);
        dp[0] = 1;
        for (int coin : coins) {
            for (int x = coin; x < amount + 1; ++x) {
                dp[x] += dp[x - coin];
            }
        }
        return dp[amount];   
    }
};
