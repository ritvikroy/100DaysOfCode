class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> res;
        int s = -n/2;
        if(n%2==0){
            while(n){
                if(s){
                    res.push_back(s);
                    n--;
                }
                s++;
            }
        }
        else{
            while(n--)
                res.push_back(s++);
        }
        return res;     
    }
};
