class Solution {
public:
    string countAndSay(int n) {
        string s = "1";
        while (--n) {
            string ns;
            int i = 0;
            while (i < s.size()) {
                int count = 1;
                while (i + 1 < s.size() && s[i] == s[i + 1]) {
                    ++i;
                    ++count;
                }
                ns += to_string(count) + s[i];
                ++i;
            }
            s = ns;
        }
        return s;     
    }
};
