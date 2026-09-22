class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return nums[0];
        int maxi=0;
        int prod=1;
        for(int i=0;i<n;i++){
            prod*=nums[i];
            if(prod>maxi){
                maxi=prod;
            }
            if(prod<0){
                prod=0;
            }

        }
        return maxi;
        
    }
};
