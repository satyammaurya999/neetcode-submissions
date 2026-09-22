class Solution {
    int solve(vector<int>&nums,int i,int p){
        int n=nums.size();
        if(i>=n){
            return 0;
        }
        int take=0;
        if(p==-1 || (nums[p]<nums[i])){
             take=1+solve(nums,i+1,i);
        }
        int nottake=solve(nums,i+1,p);
        return max(take,nottake);
    }
public:
    int lengthOfLIS(vector<int>& nums) {
        return solve(nums,0,-1);
        
    }
};
