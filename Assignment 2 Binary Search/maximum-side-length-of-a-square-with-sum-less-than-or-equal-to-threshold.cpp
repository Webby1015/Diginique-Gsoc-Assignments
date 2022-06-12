class Solution {
public:
     int squareSum(vector<vector<int>>& prefixSum, int x1, int y1, int x2, int y2) {
        return prefixSum[x2][y2] - prefixSum[x1][y2] - prefixSum[x2][y1] + prefixSum[x1][y1];
    }
    int maxSideLength(vector<vector<int>>& mat, int threshold)
    {
        int n=mat.size(),m=mat[0].size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        for(int i=0;i<n;i++)
        {
           for(int j=0;j<m;j++)
           {
               dp[i+1][j+1]=dp[i+1][j]+mat[i][j];
           }
        }
        for(int i=1;i<=n;i++)
        {
           for(int j=1;j<=m;j++)
           {
               dp[i][j]=dp[i-1][j]+dp[i][j];
           }
        }
        int res = 0;
        for (int i = 1; i <= n; i++) 
        {
            for (int j = 1;j <= m; j++) 
            {
                int len = res+1;
                while (i-len >=0  && j-len >=0 && squareSum(dp, i-len, j-len, i, j) <= threshold)                 {
                    res = len;
                    len++;
                }
            }
        }
        return res;
    }
};
