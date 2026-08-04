class Solution {
public:
    string minWindow(string s, string t) {
        if(t.empty() or s.size()<t.size()) return "";
        unordered_map<char,int> need,window;
        for(char c:t){
            need[c]++;
        }
        int required=need.size();
        int left=0,minLen=INT_MAX,minStart=0,formed=0;
        for(int right=0;right<(int)s.size();right++){
            char c=s[right];
            window[c]++;
            if(need.count(c) && window[c]==need[c]) formed++;
            while(formed==required){
                if((right-left+1)<minLen){
                    minLen=right-left+1;
                    minStart=left;
                }
                char cl=s[left];
                if(need.count(cl) && window[cl]==need[cl]) formed--;
                window[cl]--;
                left++;
            }


        }
        return minLen==INT_MAX?"":s.substr(minStart,minLen);
    }
};
