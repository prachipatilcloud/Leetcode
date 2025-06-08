class Solution {
public:
    int averageValue(vector<int>& nums) {
        int sum = 0;
        int count = 0;

        for(int i : nums){
            if(i % 2 == 0 && i % 3 == 0){
                count++;
                sum = sum + i;
            }
        }
        return count == 0 ? 0 : sum/count;
    }
};