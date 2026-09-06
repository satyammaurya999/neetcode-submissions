class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
       int ans;
       int asum=accumulate(nums.begin(),nums.end(),0);
       int esum=(n*(n+1))/2;
        return ans=esum-asum;
        
    }
};
