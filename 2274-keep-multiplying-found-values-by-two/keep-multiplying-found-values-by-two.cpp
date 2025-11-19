class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_set<int> n(nums.begin(), nums.end());
        while(n.find(original) != n.end()){
            original *= 2;
        }
        return original;
    }
};