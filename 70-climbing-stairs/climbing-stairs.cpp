class Solution {
public:
    int climbStairs(int n) {
        if(n == 1) return 1;
        int prev = 1;
        int curr = 2;
        for(int i = 3; i<=n; i++){
            int next = prev + curr;
            prev = curr;
            curr = next;
        }
        return curr;
    }
};