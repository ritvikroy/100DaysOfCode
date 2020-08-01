class Solution {
public:
    double average(vector<int>& salary) {
         int mx=INT_MIN,mn=INT_MAX;
        double sum=0;
        for(auto x:salary){
            sum+=x;
            mx=max(mx,x);
            mn=min(mn,x);
        }
        sum-=(mx+mn);
        return sum/(salary.size()-2);
    }
};
