class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        unordered_set<int> s;
        for(auto& e:nums){
            s.insert(e);
        }
        int longest=1;
        for(int i=0;i<nums.size();i++){
            int currlong=1;
            int current=1;
                if(s.count(nums[i]-1)==0){
                    while(s.count(nums[i]+current)==1){
                        currlong++;
                        longest=max(longest,currlong);
                        current++;
                    }
                }

        }
        return longest;
    }
};
