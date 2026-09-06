class Solution {
public:
    int maxArea(vector<int>& nums) {
        int maxarea=0;
        int n=nums.size();
        int i=0;
        int j=n-1;
        while(i<j){
            int wt=j-i;
            int ht=min(nums[i],nums[j]);
            int area=ht*wt;
            maxarea=max(maxarea,area);
            nums[i]<nums[j]?i++:j--;
        }
        return maxarea;
    }
};
