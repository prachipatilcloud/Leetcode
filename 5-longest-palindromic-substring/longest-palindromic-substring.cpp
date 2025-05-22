class Solution {
public:
    string longestPalindrome(string s) {
        string s2;
        s2 = s;
        reverse(s2.begin(), s2.end());

        int m = s.size();
        int n = s2.size();

        int max_len = 0;
        int endIndex =0;

        vector<vector<int>>dp(m+1, vector<int>(n+1,0));

        for(int i =1; i<= m; i++){
            for(int j =1; j<= m; j++){
                if(s[i-1]  == s2[j-1]){
                    dp[i][j] = 1+ dp[i-1][j-1];
                    int start1 = i-dp[i][j];
                    int start2 = n-j;

                    if(start1 == start2 && max_len < dp[i][j]){
                        max_len = dp[i][j];
                        endIndex = i;
                    }
                }
            }
        }
        return s.substr(endIndex - max_len, max_len);
    }
};