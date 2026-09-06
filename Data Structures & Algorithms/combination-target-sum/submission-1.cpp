class Solution {
    set<vector<int>> s;
    void solve(vector<int>& nums, int target, vector<vector<int>>& ans, vector<int>& comb, int i) {
        int n = nums.size();
        if (i == n || target < 0) {
            return;
        }
        if (target == 0) {
            if (s.find(comb) == s.end()) {
                ans.push_back(comb);
                s.insert(comb);
            }
            return;
        }
        comb.push_back(nums[i]);                          // include
        // solve(nums, target - nums[i], ans, comb, i + 1);  // include
        solve(nums, target - nums[i], ans, comb, i);      // multiple inclusion
        comb.pop_back();
        solve(nums, target, ans, comb, i + 1);
    }

   public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        vector<int> comb;
        solve(nums, target, ans, comb, 0);
        return ans;
    }
};
