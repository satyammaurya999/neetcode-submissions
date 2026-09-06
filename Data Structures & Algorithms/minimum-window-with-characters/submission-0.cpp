class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.size();
        int windowsize=INT_MAX;
        unordered_map<char,int>mp;
        for(char ch:t){
            mp[ch]++;
        }
        int start_i=0;
        int rcnt=t.size();
        int i=0;
        int j=0;
        while(j<n){
            char ch=s[j];
            if(mp[ch]>0){
                rcnt--;
            }
            mp[ch]--;

            while(rcnt==0){
                int currsize=j-i+1;
                if(windowsize>currsize){
                    windowsize=currsize;
                    start_i=i;
                }
                mp[s[i]]++;
                if(mp[s[i]]>0){
                    rcnt++;
                }
                i++;
            }
            j++;

        }
        return windowsize==INT_MAX?"":s.substr(start_i,windowsize);
        
        
    }
};
