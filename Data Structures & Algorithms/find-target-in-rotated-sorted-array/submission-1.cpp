
class Solution {
public:
    int findMin(vector<int>& nums){
        int low = 0, high = nums.size() - 1;
        while (low < high) {
            if (nums[low] <= nums[high]) return low;   // sorted window → min at low  (INSIDE the loop!)
            int mid = low + (high - low) / 2;
            if (nums[low] == nums[mid]) return high;    // mid collided with low → min at high
            if (nums[low] <  nums[mid]) low = mid + 1;  // mid in high run → min is right
            else                        high = mid;     // mid in low run → min at mid or left
        }
        return low;                                     // low == high → the min's index
    }
    int search(vector<int>& nums, int target) {
        int high = nums.size() - 1;
        int p = findMin(nums);                          // p = pivot INDEX
        int lo, hi;
        if (target > nums[high]) { lo = 0; hi = p - 1; }   // target above low run → search high run
        else                     { lo = p; hi = high;  }   // else → search low run
        while (lo <= hi) {                              // plain target binary search
            int mid = lo + (hi - lo) / 2;
            if (nums[mid] == target) return mid;
            if (nums[mid] > target)  hi = mid - 1;
            else                     lo = mid + 1;
        }
        return -1;
    }
};