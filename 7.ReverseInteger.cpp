class Solution {
public:
    int reverse(int x) {
        long num = abs(long(x));
        long rev = 0;

        while(num) {
            rev = (rev * 10) + num % 10;;
            num = num/10;
        }
        if (rev > INT_MAX) return 0; 
        return (x < 0 ? -rev : rev);
    }
};
