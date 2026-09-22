class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        string res="";
        for(string ch:wordDict){
            res+=ch;
        }
        return res==s;
        
    }
};
