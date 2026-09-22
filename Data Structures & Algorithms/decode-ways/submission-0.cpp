class Solution {
    private:
    int solve(string &s,int i){
        int n=s.size();
        if(i==n) return 1;
        if(s[i]=='0'){
            return 0;
        }
        int result=solve(s,i+1);
        if(i+1<n){
            if(s[i]=='1' || (s[i]=='2' && s[i+1]<='6')){
            result+=solve(s,i+2);
        }

        }
        return result;
    }
    public:
    int numDecodings(string s) {
        return solve(s,0);
    }
};
