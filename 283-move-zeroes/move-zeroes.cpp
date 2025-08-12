class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans;
        for(int num : nums){
            if(num != 0){
                ans.push_back(num);
            }
        }
        while(ans.size() < nums.size()) {
            ans.push_back(0);
        }
        nums = ans;
    }
};