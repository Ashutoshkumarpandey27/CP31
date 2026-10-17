class Solution {
public:
    int solve(int i,int j,int m,int n,vector<vector<int>>& triangle,vector<vector<int>>&dp){
        
        if(i==m-1 )return triangle[i][j];
        
        if(dp[i][j]!=-1)return dp[i][j];
        
        int sameid=triangle[i][j]+solve(i+1,j,m,n,triangle,dp);
        int diffid=triangle[i][j]+solve(i+1,j+1,m,n,triangle,dp);


        dp[i][j]= min(sameid,diffid);
        return dp[i][j];



    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int m=triangle.size();
        int n=triangle[0].size();
        vector<vector<int>>dp(m,vector<int>(m,-1));
       
        return solve(0,0,m,n,triangle,dp);
        
    }
};