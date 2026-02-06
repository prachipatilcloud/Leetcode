class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int left = 0;
        int maxlen = 1;
        for(int i =0; i<n; i++){
            while(left <= i && 1LL * nums[left] * k <nums[i]){
                left++;
            }
            maxlen = max(maxlen, i-left+1);
        }
        return n-maxlen;
    }
};