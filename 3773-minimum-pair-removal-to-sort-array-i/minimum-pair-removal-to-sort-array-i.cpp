class Solution {
public:
    bool isNonDecreasing(vector<int>& nums) {
        for (int i = 0; i + 1 < nums.size(); i++) {
            if (nums[i] > nums[i + 1]) return false;
        }
        return true;
    }

    int minimumPairRemoval(vector<int>& nums) {
        int ops = 0;

        while (!isNonDecreasing(nums)) {
            int minSum = INT_MAX;
            int idx = 0;

            for (int i = 0; i + 1 < nums.size(); i++) {
                int s = nums[i] + nums[i + 1];
                if (s < minSum) {
                    minSum = s;
                    idx = i;
                }
            }

            nums.erase(nums.begin() + idx, nums.begin() + idx + 2);
            nums.insert(nums.begin() + idx, minSum);
            ops++;
        }

        return ops;
    }
};
