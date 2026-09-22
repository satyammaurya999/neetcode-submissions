class Solution {
    int solve(vector<int>&nums,int i){
        int n=nums.size();
        if(i>=n){
            return 0;

        }
        if(dp[n]!=-1) return dp[n];
        int take=nums[i]+solve(nums,i+2);
        int notake=solve(nums,i+1);
        return dp[n]=max(take,notake);
    }
public:
    int rob(vector<int>& nums) {
        vector<int>dp(n+1,-1);
        return solve(nums,0,dp);
        
    }
};
