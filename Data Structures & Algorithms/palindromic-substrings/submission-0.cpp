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
    int countSubstrings(string s) {
        int n=s.size();
        if(n==1) return 1;
       int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(solve(s,i,j)==true ){
                  cnt++;
                }
            }
        }
        return cnt;
        
    }
};