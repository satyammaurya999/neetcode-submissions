class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            int diff=target-numbers[i];
            if(mp.find(diff)!=mp.end()){
                return {mp[i]+1,i};
            }
            mp[i]=i;
        }
        return {};

        
    }
};
