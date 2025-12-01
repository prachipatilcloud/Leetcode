class Solution {
public:
    bool canRun(long long T, int n, vector<int>& batteries) {
        long long total = 0;

        for (long long b : batteries) {
            total += min(b, T);   
        }

        return total >= T * n;   
    }

    long long maxRunTime(int n, vector<int>& batteries) {
        long long sum = 0;
        for (int b : batteries) sum += b;

        long long left = 0;
        long long right = sum / n;

        long long ans = 0;

        while (left <= right) {
            long long mid = (left + right) / 2;

            if (canRun(mid, n, batteries)) {
                ans = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return ans;
    }
};
