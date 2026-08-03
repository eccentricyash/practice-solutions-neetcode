class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> st;
        int maxlen=0,left=0;
        for(int right=0;right<s.size();right++){
            while(st.count(s[right])==1){
                st.erase(s[left]);
                left++;
            }
            st.insert(s[right]);
            
            maxlen=max(maxlen,right-left+1);
        }
        return maxlen;
    }
};
