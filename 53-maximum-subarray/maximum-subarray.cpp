class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();

        int max_sum = INT_MIN;
        int currSum = 0;

        for(int i = 0; i<n; i++){
            currSum += nums[i];
            max_sum = max(currSum, max_sum);
            if(currSum < 0){
                currSum = 0;
            }
        }
    return max_sum;
    }
};