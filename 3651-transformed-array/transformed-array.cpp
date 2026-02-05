class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        for(int i =0 ; i<n; i++){
            if(nums[i] == 0){
                res[i] = 0;
            }else{
                long long idx = i;
                long long jump = nums[i];

                int numIndex = (int)(idx + jump + n )%n;
                if (numIndex < 0) numIndex += n;
                res[i] = nums[numIndex];
            }
        }
        return res;
    }
};