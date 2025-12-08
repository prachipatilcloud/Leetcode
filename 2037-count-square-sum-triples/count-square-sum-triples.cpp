class Solution {
public:
    int countTriples(int n) {
        long long count = 0;
        for(int a = 1; a<=n; a++){
            long long a2 = 1LL*a*a;
            for(int b = 1; b<=n; b++){
                long long sum = a2 + 1LL * b * b;
                int c = (int) llround(sqrt((long double)sum));
                if(1LL * c * c == sum && c<=n) count++;

            }
        }
        return (int) count;
    }
};