class Solution {
    bool solve(string &s,int i,int j){
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }
           i++;
           j--;
        }
        return true;
    }
public:
    string longestPalindrome(string s) {
        if(s.size()==1){
            return s;
        }
        int sp=0;
        int maxlen=0;
        for(int i=0;i<s.size();i++){
            for(int j=i+1;j<s.size();j++){
                if(solve(s,i,j)==true){
                    if(j-i+1>maxlen){
                        maxlen=j-i+1;
                        sp=i;
                    }
                }
            }
        }
        return s.substr(sp,maxlen);
        
    }
};
