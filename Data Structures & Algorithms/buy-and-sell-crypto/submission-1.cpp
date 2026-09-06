class Solution {
public:
    int maxProfit(vector<int>&  nums){
        int minPrice=INT_MAX;
        int maxProfit=0;
       for(int num:nums){
        minPrice=min(minPrice,num);
        maxProfit=max(maxProfit,num-minPrice);
       }
        return maxProfit;
    }
};
