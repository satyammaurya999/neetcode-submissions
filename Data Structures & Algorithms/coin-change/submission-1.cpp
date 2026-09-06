class Solution {
    int solve(vector<int>& coins,int amount,int i){
        int n=coins.size();
        if(amount==0){
            return 0;
        }
        if(i==n){
            return 1e9;
        }
       
        int nottake=solve(coins,amount,i+1);
        int take=1e9;
        if(coins[i]<=amount){
            take=1+solve(coins,amount- coins[i],i);
        }
        return min(nottake,take);

        
    }
public:
    int coinChange(vector<int>& coins, int amount) {
    int ans=solve(coins,amount,0);
    return ans>=1e9?-1:ans;
        
    }
};
