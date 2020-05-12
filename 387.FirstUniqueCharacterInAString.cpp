class Solution {
public:
    int firstUniqChar(string s) {
        int visited[s.length()];
        for (int k = 0; k < s.length(); k++ ) {
            visited[k] = 0;
        }
         string rev = s;
        reverse(rev.begin(), rev.end());
       
        if (s == "") return -1;
        else if(s.length() == 1) return 0;
        else if (s == rev) return -1;
        
        for (int i = 0; i < s.length(); i++) {
            for (int j = i + 1; j <= s.length(); j++ ) {
                 
                 if (s[i] == s[j] ) {
                     visited[i] = 1;
                     visited[j] = 1;
                     break;
                 }       
                 if (j == s.length() - 1 && visited[i] == 0) { 
                    return i;
                    }
                else if (i == s.length() - 1 && visited[i] == 0) { 
                    return i;
                    }     
            }
        }
        return -1;
    }
};
