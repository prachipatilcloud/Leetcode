class Solution {
public:
    long long minimumCost(vector<int>& nums, int k, int dist) {
        int n = nums.size();
        long long ans = LLONG_MAX;
        
        multiset<int> chosen, others;
        long long sum = 0;
        int need = k - 1;
        
        int left = 1;
        
        for (int right = 1; right < n; right++) {
            
            // Add nums[right]
            chosen.insert(nums[right]);
            sum += nums[right];
            
            // Keep only smallest 'need' elements in chosen
            if (chosen.size() > need) {
                auto it = prev(chosen.end());
                sum -= *it;
                others.insert(*it);
                chosen.erase(it);
            }
            
            // Maintain window constraint
            while (right - left > dist) {
                int val = nums[left];
                
                if (chosen.find(val) != chosen.end()) {
                    chosen.erase(chosen.find(val));
                    sum -= val;
                    
                    if (!others.empty()) {
                        auto it = others.begin();
                        chosen.insert(*it);
                        sum += *it;
                        others.erase(it);
                    }
                } else {
                    others.erase(others.find(val));
                }
                
                left++;
            }
            
            if (chosen.size() == need) {
                ans = min(ans, sum + nums[0]);
            }
        }
        
        return ans;
    }
};
