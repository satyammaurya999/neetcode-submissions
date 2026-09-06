class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
         int n=nums.size();
        vector<int>px(n);
        vector<int>sx(n);
        vector<int>res;
       
        px[0]=nums[0];
        for(int i=1;i<n;i++){
            px[i]=px[i-1]*nums[i];
        }
        sx[n - 1] = nums[n - 1];
        for(int i = n - 2; i >= 0; i--) {
           sx[i] = sx[i + 1] * nums[i];
        }
        for(int i=0;i<n;i++){
            int num;
            if(i==0){
               
                num=sx[i+1];
            }
            else if(i==n-1){
                
                num=px[i-1];
            }
            else{
                num=px[i-1]*sx[i+1];
            }
            res.push_back(num);
        }
        return res;

    }
};
