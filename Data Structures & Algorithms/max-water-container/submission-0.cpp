class Solution {
public:
    int maxArea(vector<int>& nums) {
        int maxarea=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
               int w=j-i;
               int ht=min(nums[i],nums[j]);
               int area=w*ht;
               maxarea=max(maxarea,area);
            }

        }
        return maxarea;
    }
};
