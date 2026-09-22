class Solution {
public:
    int solve(vector<int>& piles, int i, int j) {

        if (i == j)
            return piles[i];

        int takeLeft = piles[i] - solve(piles, i + 1, j);

        int takeRight = piles[j] - solve(piles, i, j - 1);

        return max(takeLeft, takeRight);
    }

    bool stoneGame(vector<int>& piles) {

        return solve(piles, 0, piles.size() - 1) > 0;
    }
};