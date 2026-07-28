class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left=0,right=heights.size()-1;
        int area=0;
        int biggestArea=0;
        while(left<right){
        biggestArea=(right-left)*min(heights[left],heights[right]);
        area=max(area,biggestArea);
            if(heights[left]<=heights[right]){
                left++;
            }
            else{
                right--;
            }
       

        }
        return area;
        
    }
};
