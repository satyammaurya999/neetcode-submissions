class Solution {
    bool solve(int idx,string &s,vector<bool>&dp){
        int n=s.size();
        if(idx>=n){
             return true;
        }
        if(dp[idx]!=false) return dp[idx];
        if(st.find(s)!=st.end()) return dp[idx]=true;
        for(int l=1;l<=n;l++){
            string temp=s.substr(idx,l);
            if(st.find(temp)!=st.end() && solve(idx+l,s,dp)){
                return dp[idx]=true;
            }
        }
        return dp[idx]= false;
    }
public:
   unordered_set<string>st;
    bool wordBreak(string s, vector<string>& wordDict) {
        int n=s.size();
        for(string &ch:wordDict){
            st.insert(ch);
        }
        vector<bool>dp(n,false);
        return solve(0,s,dp);
        
    }
};
