class Solution {
public:
    int numDistinct(string s, string t) {
        int n = s.size();
        int m = t.size();

        const long long LIMIT = INT_MAX;

        vector<vector<long long>> dp(
            n + 1,
            vector<long long>(m + 1, 0)
        );

        // Empty t
        for (int i = 0; i <= n; i++) {
            dp[i][0] = 1;
        }

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= min(i, m); j++) {

                // Skip s[i-1]
                dp[i][j] = dp[i - 1][j];

                // Take s[i-1]
                if (s[i - 1] == t[j - 1]) {

                    if (dp[i][j] <= LIMIT - dp[i - 1][j - 1]) {
                        dp[i][j] += dp[i - 1][j - 1];
                    } else {
                        dp[i][j] = LIMIT;
                    }
                }
            }
        }

        return (int)dp[n][m];
    }
};