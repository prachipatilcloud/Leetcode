class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> freq;
        int ans = -1;
        for(int x:arr){
            freq[x]++;
        }
        for(auto y:freq){
            if(y.first == y.second){
                ans = max(ans, y.first);
            }
        }
        return ans;

    }
};