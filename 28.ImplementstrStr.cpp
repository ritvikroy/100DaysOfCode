class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.size() == 0) return 0;
         int m = haystack.size(), n = needle.size();
        
        for (int i = 0; i <= m - n; i++) {
            for (int j = 0; j < needle.size(); j++) {
                if(haystack[i + j] != needle[j]) break;   
                if (j == needle.size() - 1)  return i;          
            }
        }  
        return -1;
    }
};
