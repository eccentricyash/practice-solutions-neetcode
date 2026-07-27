class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for(auto& e:nums){
            m[e]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> p;
        for(auto& [value,freq]: m){
            p.push({freq,value});
            if(p.size()>k) p.pop();
        }
        vector<int> ans;
        while(!p.empty()){
            ans.push_back(p.top().second);
            p.pop();
        }
        return ans;
    }
};
