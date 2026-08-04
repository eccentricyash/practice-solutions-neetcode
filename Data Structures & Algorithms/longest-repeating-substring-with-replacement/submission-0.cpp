class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> count(26,0);
        int left=0,len=0,maxFreq=0,non_majority=0,res=0;
        for(int right=0;right<(int)s.size();right++){
            len=right-left+1;
            count[s[right]-'A']++;
            maxFreq=*max_element(count.begin(),count.end());
            while((right-left+1)-maxFreq>k){
                count[s[left]-'A']--;
                left++;
            }
            res=max(res,right-left+1);
        }
        return res;
    }
};
