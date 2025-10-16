class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0, right = nums.size()-1;
        int mid = left+(right - left)/2;

        while(left <= right){
            if(nums[mid] == target){
                return mid;
            }
            if(target > nums[mid]){
                left = mid+ 1;
            }
            else{
                right = mid - 1;
            }
            mid = left+(right - left)/2; 
        }
        return left;
    }
};