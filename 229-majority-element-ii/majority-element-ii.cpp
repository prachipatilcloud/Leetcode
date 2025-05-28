class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int>res;

        for(int i = 0; i<n; i++){
            int count = 0;
            for(int j = 0; j<n; j++){
                if(nums[i] == nums[j]){
                    count++;
                }
            }
            if(count>(n/3)){
                if(res.size() == 0 || nums[i] != res[0]){
                    res.push_back(nums[i]);
                }
            }

            if(res.size() == 2){
                if(res[0] > res[1]){
                    swap(res[0], res[1]);
                }
                break;
            }
            
        }
        return res;
    }
};