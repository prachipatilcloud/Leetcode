class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        int total = 0;
        int m1_small1 = INT_MAX, m1_small2 = INT_MAX;
        int m2_small1 = INT_MAX, m2_small2 = INT_MAX;

        for(int x: nums){
            total += x;
            int r = x % 3;
            if(r == 1){
                if(x < m1_small1){
                    m1_small2 = m1_small1;
                    m1_small1 = x;
                }
                else if(x<m1_small2){
                    m1_small2 = x;
                }
            }
            else if(r == 2){
                if(x < m2_small1){
                    m2_small2 = m2_small1;
                    m2_small1 = x;
                }
                else if(x<m2_small2){
                    m2_small2 = x;
                }
            }
        }
        if (total % 3 == 0) return total;
        int mod = total %3;
        int ans = 0;

        if(mod == 1){
            int remove1 = m1_small1;
            int remove2 = (m2_small1 == INT_MAX || m2_small2 == INT_MAX)? INT_MAX : m2_small1 + m2_small2;
            ans = total - min(remove1, remove2);
        }
        else{
            int remove1 = m2_small1;
            int remove2 = (m1_small1 == INT_MAX || m1_small2 == INT_MAX)? INT_MAX : m1_small1 + m1_small2;
            ans = total - min(remove1, remove2);
        }
        return ans < 0 ? 0 : ans;
    }
};