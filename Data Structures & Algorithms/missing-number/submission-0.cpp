class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n-1;i++){
           if(nums[i+1]==nums[i]+1){
            continue;
           }
           else{
            ans=nums[i]+1;
            break;
           }
        }
        return ans;
        
    }
};
