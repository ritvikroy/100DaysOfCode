class Solution {
public:
    void reverseString(vector<char>& s) {
        string temp = {};  
        for(int i = 0; i < s.size()/2; i++) {
            temp[0] = s[i];
            s[i] = s[s.size() - i - 1];
            s[s.size() - i - 1] = temp[0];
        }  
    }
};
