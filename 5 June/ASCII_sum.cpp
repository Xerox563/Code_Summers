#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

string print_LCS(const string &str1, const string &str2)
{
    int n = str1.length();
    int m = str2.length();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (str1[i - 1] == str2[j - 1])
            {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    // Printing LCS after filling up the DP Table
    string ans = "";
    int i = n, j = m;
    while (i > 0 && j > 0)
    {
        if (str1[i - 1] == str2[j - 1])
        {
            ans.push_back(str1[i - 1]);
            i--;
            j--;
        }
        else if (dp[i - 1][j] > dp[i][j - 1])
        {
            i--;
        }
        else
        {
            j--;
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int minimumDeleteSum(string str1, string str2)
{
    string ans = print_LCS(str1, str2);
    cout << "LCS: " << ans << endl;

    unordered_map<char, int> mp1, mp2;
    for (auto ch : str1)
    {
        mp1[ch]++;
    }
    for (auto ch : str2)
    {
        mp2[ch]++;
    }

    for (auto ch : ans)
    {
        if (mp1.find(ch) != mp1.end())
        {
            mp1[ch]--;
            if (mp1[ch] == 0)
                mp1.erase(ch);
        }
        if (mp2.find(ch) != mp2.end())
        {
            mp2[ch]--;
            if (mp2[ch] == 0)
                mp2.erase(ch);
        }
    }

    string temp = "";
    for (auto x : mp1)
    {
        while (x.second--)
        {
            temp.push_back(x.first);
        }
    }
    for (auto x : mp2)
    {
        while (x.second--)
        {
            temp.push_back(x.first);
        }
    }

    int answ = 0;
    for (auto ch : temp)
    {
        answ += int(ch);
    }
    return answ;
}

int main()
{
    string str1 = "sea";
    string str2 = "eat";
    cout << "Minimum ASCII Delete Sum: " << minimumDeleteSum(str1, str2) << endl;
    return 0;
}
