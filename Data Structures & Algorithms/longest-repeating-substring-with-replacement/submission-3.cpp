class Solution {
public:
    int characterReplacement(string s, int k) {
        int hash[26]={0};
        int n=s.size();
        int l=0;
        int r=0;
        int maxfreq=0;
        int maxlen=0;

        while(r<n){
            hash[s[r]-'A']++;
            maxfreq=max(maxfreq,hash[s[r]-'A']);
            while((r-l+1)-maxfreq>k){
                hash[s[l]-'A']--;
                for(int i=0;i<26;i++){
                    maxfreq=max(maxfreq,hash[i]);
                }
                l++;
            }
            if((r-l+1)-maxfreq<=k){
                maxlen=max(r-l+1,maxlen);
            }
            r++;
        }
        return maxlen;
    }
};
