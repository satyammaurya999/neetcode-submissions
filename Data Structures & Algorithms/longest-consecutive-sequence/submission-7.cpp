class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
set<int> st(nums.begin(), nums.end());

vector<int> vec(st.begin(), st.end());


int cnt = 1;
int maxi = 1;

for(int i = 1; i < vec.size(); i++) {
    if(vec[i] == vec[i-1] + 1) {
        cnt++;
    } else {
        cnt = 1;
    }
    maxi = max(maxi, cnt);
}

return maxi;
    }
};
