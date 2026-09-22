class Solution {
    int solve(int i,int j,int n,int m,string &text1,string &text2){
        if(i>=n || j>=m){
            return 0;
        }
        if(text1[i]==text2[j]){
            return 1+solve(i+1,j+1,n,m,text1,text2);
        }
        else{
            return max(solve(i,j+1,n,m,text1,text2),solve(i+1,j,n,m,text1,text2));
        }
    }
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.size();
        int m=text2.size();
        return solve(0,0,n,m,text1,text2);
        
    }
};
