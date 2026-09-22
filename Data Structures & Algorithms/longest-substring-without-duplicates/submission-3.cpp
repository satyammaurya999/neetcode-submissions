class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       unordered_map<char,int>mp;
       int cnt=0;
       int maxcnt=0;
       for(int i=0;i<s.size();i++){
          if(mp.find(s[i])==mp.end()){
            mp[s[i]]++;
            cnt++;
            maxcnt=max(maxcnt,cnt);
          }
          else{
            cnt=0;
            mp.clear();
          }
       }
       return maxcnt;
    }
};
