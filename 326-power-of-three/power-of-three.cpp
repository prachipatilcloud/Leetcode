class Solution {
public:
    bool isPowerOfThree(int n) {
        for(int i =0 ;i<20; i++){
            int ans = pow(3,i);
            if(ans == n) return true;
        }
    return false;
    }
};