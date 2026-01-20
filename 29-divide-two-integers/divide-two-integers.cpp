class Solution {
public:
    int divide(int dividend, int divisor) {

        // Special overflow case
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        // Take absolute values
        long long a = abs((long long)dividend);
        long long b = abs((long long)divisor);

        long long answer = 0;

        // Keep subtracting biggest possible multiple
        while (a >= b) {
            long long temp = b;
            long long count = 1;

            // Double temp until it exceeds a
            while (a >= (temp << 1)) {
                temp <<= 1;
                count <<= 1;
            }

            a -= temp;
            answer += count;
        }

        // Fix sign
        if ((dividend < 0) ^ (divisor < 0))
            answer = -answer;

        return answer;
    }
};
