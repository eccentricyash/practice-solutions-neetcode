class Solution {
public:
    bool isAnagram(string s, string t) {
        int chars[26]={0};
        if(s.length()!=t.length()) return false;
        for(int i=0;i<s.length();i++){
            chars[s[i]-'a']++;
        }
        for(int i=0;i<t.length();i++){
            chars[t[i]-'a']--;
        }
        for(auto e: chars){
            if(e!=0)
            return false;
        }
        return true;
    }
};
