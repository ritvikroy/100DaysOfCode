class Solution {
public:
    int mySqrt(int x) {
        long int j = x;
        long int i = 0;
        if(x == 0 ) return 0;
        if(x == 1 || x == 2 || x == 3) return 1;
     for (i = 1; i*i <= x; i++) {
         if(x == i*i) return i;
         else if(i*i < x && x < (i + 1)*(i + 1)) return i;
     } 
        return i;
    }
};
