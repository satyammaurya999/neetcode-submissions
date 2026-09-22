class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        int maxi=0;
        for(auto &it:mp){
            maxi=max(maxi,it.second);
        }
        return maxi+k;

        
    }
};
