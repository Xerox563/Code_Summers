#include<bits/stdc++.h>
using  namespace std;

int minTransformationCost(const string &str1, const string &str2)
{
    int m = str1.size();
    int n = str2.size();

    vector<vector<int>> dp(m + 1, std::vector<int>(n + 1, 0));

    for (int i = 0; i <= m; ++i)
    {
        dp[i][0] = 0;
    }
    for (int j = 0; j <= n; ++j)
    {
        dp[0][j] = j;
    }

    for (int i = 1; i <= m; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            if (str1[i - 1] == str2[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1];
            }
            else
            {
                dp[i][j] = std::min(dp[i][j - 1] + 1,
                                    dp[i - 1][j]);
            }
        }
    }

    return dp[m][n];
}

int main()
{
    std::string str1 = "abd";
    std::string str2 = "aabccad";

    int cost = minTransformationCost(str1, str2);
    std::cout << "Minimum transformation cost: " << cost << std::endl;

    return 0;
}
