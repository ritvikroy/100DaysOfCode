class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t  rev=0, bit;

        for(int i=0;i<32;i++) {
            bit=n&1;
            rev=rev^bit;
            n=n>>1;
            if(i<31)//****
            rev=rev<<1;
        }
        return rev;
    }
};
