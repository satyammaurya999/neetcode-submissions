class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int prevMax=nums[0];
        int prevMin=nums[0];
        int ans=nums[0];
        for(int i=1;i<n;i++){
            int x=nums[i];
            int tempMax=max({x,x*prevMax,x*prevMin});
            int tempMin=min({x,x*prevMax,x*prevMin});
            prevMax=tempMax;
            prevMin=tempMin;
            ans=max(ans,prevMax);
        }
        return ans;
        
    }
};
