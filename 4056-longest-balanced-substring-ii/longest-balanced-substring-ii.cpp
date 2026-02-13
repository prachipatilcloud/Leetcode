class Solution {
public:
    int longestBalanced(string s) {
        int n = s.size();
        int ans = 1;  // at least 1

        int a = 0, b = 0, c = 0;

        // Track longest single-character run
        int run = 1;
        for (int i = 1; i < n; i++) {
            if (s[i] == s[i-1]) {
                run++;
            } else {
                run = 1;
            }
            ans = max(ans, run);
        }

        // 3-character balanced
        unordered_map<long long, int> mapABC;

        // 2-character balanced
        unordered_map<long long, int> mapAB;
        unordered_map<long long, int> mapAC;
        unordered_map<long long, int> mapBC;

        auto encode = [](long long x, long long y) {
            return (x << 32) ^ y;
        };

        mapABC[encode(0,0)] = -1;
        mapAB[encode(0,0)] = -1;
        mapAC[encode(0,0)] = -1;
        mapBC[encode(0,0)] = -1;

        for(int i = 0; i < n; i++) {
            if(s[i] == 'a') a++;
            else if(s[i] == 'b') b++;
            else c++;

            // --- 3 letters ---
            long long keyABC = encode(a - b, a - c);
            if(mapABC.count(keyABC))
                ans = max(ans, i - mapABC[keyABC]);
            else
                mapABC[keyABC] = i;

            // --- a == b ---
            long long keyAB = encode(a - b, c);
            if(mapAB.count(keyAB))
                ans = max(ans, i - mapAB[keyAB]);
            else
                mapAB[keyAB] = i;

            // --- a == c ---
            long long keyAC = encode(a - c, b);
            if(mapAC.count(keyAC))
                ans = max(ans, i - mapAC[keyAC]);
            else
                mapAC[keyAC] = i;

            // --- b == c ---
            long long keyBC = encode(b - c, a);
            if(mapBC.count(keyBC))
                ans = max(ans, i - mapBC[keyBC]);
            else
                mapBC[keyBC] = i;
        }

        return ans;
    }
};
