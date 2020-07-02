class Solution {
public:
    int arrangeCoins(int n) {
        long count = 0, down = 1;
        if(n == 1) return 1;
        if(n < 1) return 0; 
        while(n >= 0) {
            n = n - down;
            down++;
            count++;
        }
        return count - 1;
    }
};
