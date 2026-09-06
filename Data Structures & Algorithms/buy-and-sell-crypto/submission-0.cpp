class Solution {
public:
    int maxProfit(vector<int>&  nums) {
        int maxp=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                int res=nums[j]-nums[i];
                maxp=max(maxp,res);
            }
        }
        return maxp;
    }
};
