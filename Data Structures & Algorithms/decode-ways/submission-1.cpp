class Solution {
private:
    int solve(string &s, int i, vector<int>& dp) {
        int n = s.size();

        if(i == n) return 1;

        if(s[i] == '0') return 0;

        if(dp[i] != -1) return dp[i];

        int result = solve(s, i + 1, dp);

        if(i + 1 < n) {
            if(s[i] == '1' || (s[i] == '2' && s[i + 1] <= '6')) {
                result += solve(s, i + 2, dp);
            }
        }

        return dp[i] = result;
    }

public:
    int numDecodings(string s) {
        int n = s.size();
        vector<int> dp(n, -1);

        return solve(s, 0, dp);
    }
};