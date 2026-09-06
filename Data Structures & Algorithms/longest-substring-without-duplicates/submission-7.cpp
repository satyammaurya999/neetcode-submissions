class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       unordered_map<char,int>mp;
       int maxlen=0;
       int l=0;
       for(int r=0;r<s.size();r++){
        while(mp.find(s[r])!=mp.end()){
            mp[s[l]]--;
            if(mp[s[l]]==0){
                mp.erase(s[l]);
            }
            l++;
        }
       
            mp[s[r]]++;
            maxlen=max(maxlen,r-l+1);
        

       }
       return maxlen;
    }
};
