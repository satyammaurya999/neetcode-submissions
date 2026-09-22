class Solution {
    bool solve(int idx,string &s){
        int n=s.size();
        if(idx>=n){
             return true;
        }
        if(st.find(s)!=st.end()) return true;
        for(int l=1;l<=n;l++){
            string temp=s.substr(idx,l);
            if(st.find(temp)!=st.end() && solve(idx+l,s)){
                return true;
            }
        }
        return false;
    }
public:
   unordered_set<string>st;
    bool wordBreak(string s, vector<string>& wordDict) {
        for(string &ch:wordDict){
            st.insert(ch);
        }
        return solve(0,s);
        
    }
};
