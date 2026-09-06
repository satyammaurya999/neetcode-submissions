class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            int diff=target-numbers[i];
            if(mp.find(diff)!=mp.end()){
                return {mp[diff]+1,i+1};
            }
            mp[numbers[i]]=i;
        }
        return {};
                           //[-5->0]
                           //[-3->1]
                           //[0->2]
                           //[2->3]
                           //[4->4]
                           //[6->5]
                           //[6->6]
                           //[8->7]

        
    }
};
