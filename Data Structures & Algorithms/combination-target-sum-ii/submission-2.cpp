class Solution {
    void solve(vector<int>& nums, int target, vector<vector<int>>& ans,
               vector<int>& comb, int start) {

        if (target == 0) {
            ans.push_back(comb);
            return;
        }

        for (int i = start; i < nums.size(); i++) {

            if (i > start && nums[i] == nums[i - 1])
                continue;

            if (nums[i] > target)
                break;

            comb.push_back(nums[i]);

            solve(nums, target - nums[i], ans, comb, i + 1);

            comb.pop_back();
        }
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