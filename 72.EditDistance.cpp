class Solution {
public:
    int minDistance(string word1, string word2) {
        int m=word1.length();
        int n=word2.length();
        int i,j;
        int dp[m+1][n+1];
        for(i=0;i<=m;i++)
        {
            for(j=0;j<=n;j++)
            {
                if(i==0)    dp[i][j]=j;
                
                else if(j==0)    dp[i][j]=i;
                
                else if(word1[i-1]==word2[j-1]) dp[i][j]=dp[i-1][j-1];
                
                else    dp[i][j]=min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]))+1;
                                       //replace    //insert      //delete
            }
        }
        return dp[m][n];   
    }
};
