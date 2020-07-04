class Solution {
public:
    int nthUglyNumber(int n) {
        if(n<=0){
            return 0;
        }
        if(n == 1){
            return 1;
        }
        vector<int> dp;
        dp.push_back(1);
        
        int p2 = 0;
        int p3 = 0;
        int p5 = 0;
        int two, three, five;
        int m;
        int i = 1; 
        
        while(i < n){
            i++;
            two = dp[p2]*2;
            three = dp[p3]*3;
            five = dp[p5]*5;
            
            m = min(two, min(three, five));
            dp.push_back(m);
            
            if(m == two) p2++;
            if(m == three) p3++;
            if(m == five) p5++;
            
        }
        return dp[n-1];
        
    }
};
