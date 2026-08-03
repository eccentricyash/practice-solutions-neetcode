class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        for(auto e:nums){
            ans.push_back(e);
        }
        for(auto e:nums){
            ans.push_back(e);
        }
        return ans;
    }
};