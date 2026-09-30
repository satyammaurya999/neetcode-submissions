class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maxiProfit=0;
        int minele=prices[0];
        for(int i=1;i<n;i++){
            maxiProfit=max(maxiProfit,prices[i]-minele);
            minele=min(minele,prices[i]);
            
        }
        return maxiProfit;
    }
};
