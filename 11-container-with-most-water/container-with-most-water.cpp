class Solution {
public:
    int maxArea(vector<int>& height) {
        int right = height.size()-1;
        int left = 0;

        int res = 0;
        while(left<right){
            int water = min(height[left], height[right])*(right-left);
            res = max(res, water);
            if(height[left]<height[right]){
                left += 1;
            }
            else{
                right -= 1;
            }
        }
        return res;
    }
};