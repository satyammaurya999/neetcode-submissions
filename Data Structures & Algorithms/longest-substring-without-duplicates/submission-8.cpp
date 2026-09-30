class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int n=s.size();
        int l=0;
        int maxlen=0;
        for(int r=0;r<n;r++){
            while(mp.find(s[r])!=mp.end()){
                mp[s[l]]--;
                if(mp[s[l]]==0){
                    mp.erase(s[l]);
                }
                l++;
            }
            
                
        
            maxlen=max(maxlen,r-l+1);
            mp[s[r]]++;
        }
        return maxlen;
        
    }
};
