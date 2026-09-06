class Solution {
    bool solve(int idx,string &s,vector<int>&dp){
        int n=s.size();
        if(idx>=n){
             return true;
        }
        if(st.find(s)!=st.end()){
            return true;
        }
        if(dp[idx]!=-1){
            return dp[idx];
        }
        for(int l=1;l<=n;l++){
            string temp=s.substr(idx,l);
            if(st.find(temp)!=st.end() && solve(idx+l,s,dp)){
                return dp[idx]=1;
            }
        }
        return dp[idx]=0;
    }
public:
unordered_set<string>st;
    bool wordBreak(string s, vector<string>& wordDict) {

        int n=s.size();
      for (auto& word : wordDict) {
            st.insert(word);
        }
        vector<int>dp(n+1,-1);
        return solve(0,s,dp);
    
    }
};
