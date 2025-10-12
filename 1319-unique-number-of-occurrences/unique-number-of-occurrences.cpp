class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> count;
        for(int num: arr){
            count[num]++;
        }

        unordered_set<int> seen;
        for(auto [num, count] : count){
            if(seen.count(count)) return false;
            seen.insert(count);
        }

        return true;
    }
};
