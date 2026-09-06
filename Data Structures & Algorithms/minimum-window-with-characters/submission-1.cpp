class Solution {
public:
    string minWindow(string s, string t) {
        int maxlen=INT_MAX;
        int countreq=t.size();
        int start_i=0;
        unordered_map<char,int>mp;
        for(auto ch:t){
            mp[ch]++;
        }
        int i=0;
        int j=0;
        while(j<s.size()){
            char ch=s[j];
            if(mp[ch]>0){
                  countreq--;
            }
            mp[ch]--;
            while(countreq==0){
                if(maxlen>j-i+1){
                    start_i=i;
                    maxlen=j-i+1;
                }
                mp[s[i]]++;
                if(mp[s[i]]>0){
                    countreq++;
                }
                i++;

            }
            j++;
        }
        return maxlen==INT_MAX?"":s.substr(start_i,maxlen);
    }
};
