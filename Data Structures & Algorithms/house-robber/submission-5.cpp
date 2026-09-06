class Solution {
    int solve(vector<int>&nums,int i,vector<int>&dp){
        int n=nums.size();
        if(i>=n){
            return 0;
        }
        if(dp[i]!=-1) return dp[i];
        int take=nums[i]+solve(nums,i+2,dp);
        int notake=solve(nums,i+1,dp);
        return dp[i]=max(take,notake);
    }
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+1,-1);
        return solve(nums,0,dp);
        
    }
};
