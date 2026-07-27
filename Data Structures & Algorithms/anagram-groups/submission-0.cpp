class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> m;
        for(string& s:strs){
            string dupli=s;
            sort(dupli.begin(),dupli.end());
            m[dupli].push_back(s);
        }
        vector<vector<string>> ans;
        for(auto& [key,value]:m){
            ans.push_back(value);
        }
        return ans;

    }
};
