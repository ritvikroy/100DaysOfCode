class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int set = false, count = 0;
        if (ransomNote == magazine || ransomNote == "") set = true;   
        for (int i = 0; i < ransomNote.length(); i++) {
            for (int j = 0; j < magazine.length(); j++) {
                if (ransomNote[i] == magazine[j]) {
                    magazine[j] = '0';
                    count++;
                    break;                
                }
            }
        }
        if (count == ransomNote.length()) set = true;
        return set;
    }
};

