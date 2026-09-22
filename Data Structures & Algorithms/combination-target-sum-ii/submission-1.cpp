class Solution {
    set<vector<int>> s;

    void solve(vector<int>& nums, int target,
               vector<vector<int>>& ans,
               vector<int>& comb, int i) {

        int n = nums.size();

        if (target == 0) {
            if (s.find(comb) == s.end()) {
                ans.push_back(comb);
                s.insert(comb);
            }
            return;
        }

        if (i == n || target < 0) {
            return;
        }

        comb.push_back(nums[i]);
        solve(nums, target - nums[i], ans, comb, i + 1);
        comb.pop_back();

        solve(nums, target, ans, comb, i + 1);
    }

public:
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        vector<vector<int>> ans;
        vector<int> comb;

        solve(nums, target, ans, comb, 0);

        return ans;
    }
};