class Solution {
public:
    int countLargestGroup(int n) {
         unordered_map<int,int>u; int mx=INT_MIN,ans(0);
        for(int i=1;i<=n;i++){
            string s=to_string(i);
            vector<int>a;
            for(auto x:s) a.push_back(x-'0');
            u[accumulate(a.begin(),a.end(),0)]++;
            if( u[accumulate(a.begin(),a.end(),0)] >mx ) mx=                            u[accumulate(a.begin(),a.end(),0)];
        }
        for(auto x:u)  if(x.second==mx)ans++; 
        return ans;
    }
};
