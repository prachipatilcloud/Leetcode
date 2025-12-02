class Solution {
public:
    int countTrapezoids(vector<vector<int>>& points) {
        const int MOD = 1e9+7;
        unordered_map<int,long long> yCount;

        for(auto &p : points)
            yCount[p[1]]++;

        vector<long long> edges;
        for(auto &it : yCount){
            long long c = it.second;
            if(c >= 2) edges.push_back(c*(c-1)/2);
        }

        long long sum = 0, squareSum = 0;
        for(auto e : edges){
            sum += e;
            squareSum += e*e;
        }

        long long result = (sum*sum - squareSum)/2;
        return result % MOD;
    }
};
