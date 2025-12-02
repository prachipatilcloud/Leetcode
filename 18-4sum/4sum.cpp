class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        int n = nums.size();

        for(int i =0;i<n-3; i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            for(int j = i+1;j<n-2;j++){
                if(j>i+1 && nums[j]==nums[j-1]) continue;
                long long newTarget = (long long)target - nums[i]-nums[j];
                int l = j+1;
                int r = n-1;

                while(l<r){
                    long long sum = (long long)nums[l]+nums[r];
                    if(sum == newTarget){
                        result.push_back({nums[i], nums[j], nums[l], nums[r]});
                        int x = nums[l], y = nums[r];
                        while (l < r && nums[l] == x) l++;
                        while (l < r && nums[r] == y) r--;
                    }
                    else if(sum<newTarget){
                        l++;
                    }else{
                        r--;
                    }
                }

            }
        }
        return result;
    }
};