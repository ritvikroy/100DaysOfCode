class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n == 1) return true;
        int power = n;
        int k = 1;
        
        while(n >= 2) {
            k *= 2;
            if(power == k) return true;
            n /= 2;
        } 
        return false;
        
    }
};
