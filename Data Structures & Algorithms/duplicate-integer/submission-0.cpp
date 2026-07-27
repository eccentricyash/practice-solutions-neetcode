class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if(nums.size()<=1) return false;
        unordered_set<int> s;
        s.insert(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(s.count(nums[i]))
            return true;
            s.insert(nums[i]);
        }
        return false;

    }
};