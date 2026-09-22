class Solution {
    int solve(vector<int>&nums,int i,int p, vector<vector<int>>&dp){
        int n=nums.size();
        if(i>=n){
            return 0;
        }
        if(dp[i][p+1]!=-1){
            return dp[i][p]
        }
        int take=0;
        if(p==-1 || (nums[p]<nums[i])){
             take=1+solve(nums,i+1,i,dp);
        }
        int nottake=solve(nums,i+1,p,dp);
        return dp[i][p+1]=max(take,nottake);
    }
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        return solve(nums,0,-1,dp);
        
    }
};
