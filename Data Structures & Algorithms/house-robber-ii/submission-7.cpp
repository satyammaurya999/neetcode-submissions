class Solution {
    int solve(vector<int>&nums,int i,int end){
        if(i>end) return 0;
        int take=nums[i]+solve(nums,i+2,end);
        int nottake=solve(nums,i+1,end);
        return max(take,nottake);

    }
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        int case1=solve(nums,0,n-2);
        int case2=solve(nums,1,n-1);
        return max(case1,case2);
        
    }
};
