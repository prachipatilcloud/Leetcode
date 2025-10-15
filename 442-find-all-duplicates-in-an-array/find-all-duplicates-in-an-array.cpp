class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int> freq;

        for(int i =0; i<nums.size(); i++){
            freq[nums[i]]++;
            if(freq[nums[i]] == 2){
                ans.push_back(nums[i]);
            }
        }
        return ans;
        
    }
};