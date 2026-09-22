class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        vector<int>res;
        for(int n:nums){
            mp[n]++;
        }
          priority_queue<
            pair<int, int>,
            vector<pair<int, int>>,
            greater<pair<int, int>>
        > pq;
        for(auto &it:mp){
            int freq=it.second;
            int ele=it.first;
            while(pq.size()<k){
                pq.push({freq,ele});
            }
        }
        while(!pq.empty()){
            pair<int,int>pr=pq.top();
            res.push_back(pr.second);
            pq.pop();
        }
        return res;



        
    }
};
