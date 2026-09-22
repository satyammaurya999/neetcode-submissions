class Solution {
    int solve(vector<int>&nums,int i){
        int  n=nums.size();
        if(i>=n){
            return 0;
        }
        int take=nums[i]+solve(nums,i+2);
        int nottake=solve(nums,i+1);
        return max(take,nottake);
    }
public:
    int rob(vector<int>& nums) {
        return solve(nums,0);
        
    }
};
