class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        int n = nums1.size();
        int m = nums2.size();
        vector<int> result;
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(nums1[i] == nums2[j]){
                    if (result.empty() || result.back() != nums1[i]){
                        result.push_back(nums1[i]);
                    }
                    break;
                }
            }
        }
        return result;
    }
};