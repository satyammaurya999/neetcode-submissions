class Solution {
    bool solve(string &s,int i,int j){
        while(i<=j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else{
                return false;
            }
        }
        return true;
    }
public:
    string longestPalindrome(string s) {
        int n=s.size();
        int maxlen=INT_MIN;
        int sp=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(solve(s,i,j) && j-i+1>maxlen ){
                    maxlen=j-i+1;
                    sp=i;
                }
            }
        }
        return s.substr(sp,maxlen);
        
    }
};
