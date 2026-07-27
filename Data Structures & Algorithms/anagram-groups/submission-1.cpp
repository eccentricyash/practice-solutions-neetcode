class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> m;
        for(string& s:strs){
            int chars[26]={0};
            for(int i=0;i<s.length();i++){
                chars[s[i]-'a']++;
            }
            string key="";
            for(char c=0;c<26;c++){
                key+=to_string(chars[c])+"#";
            }
            m[key].push_back(s);


        }
        vector<vector<string>> ans;
        for(auto& [key,value]:m){
            ans.push_back(value);
        }
        return ans;

    }
};
