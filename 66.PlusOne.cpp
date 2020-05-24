class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int add = 0;
        for (int i = digits.size() - 1; i >= 0; i--) {
            if (add == 1) {    
                if(digits[i] == 9){
                    digits[i] = 0;
                    add = 1;
                } else  {
                    add = 0;
                    digits[i]++;
                }
            }
            if (digits[digits.size() - 1] == 9 && i == (digits.size() - 1)) {
                 digits[digits.size() - 1] = 0;
                 add = 1;
            } else if ( i == (digits.size() - 1)) {
                digits[i]++;
                
            }
        }
        if(add == 1) digits.insert(digits.begin(), add);
        return digits;
    }
};
