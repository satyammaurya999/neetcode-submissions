class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> px(n, 0);
        vector<int> sx(n, 0);
        px[0] = nums[0];
        for (int i = 1; i < n; i++) {
            px[i] = px[i - 1] * nums[i];
        }
        sx[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            sx[i] = sx[i + 1] * nums[i];
        }
        vector<int>res(n,0);
        for (int i = 0; i < n; i++) {
            if(i==0){
                res[i]=sx[i+1];
            }
            else if(i==n-1){
                res[n-1]=px[i-1];
            }
            else{
                res[i]=px[i-1]*sx[i+1];
            }
        }
        return res;
    }
};
