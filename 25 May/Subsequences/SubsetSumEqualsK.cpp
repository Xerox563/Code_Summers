/* Subset Sum Equals to  K */
#include <bits/stdc++.h>
using namespace std;

/* Tabulation Solution */

bool subsetSum(int n, int k, int arr[])
{
    vector<vector<int>> dp(n, vector<int>(k + 1, 0));

    for (int i = 0; i < n; i++)
    {
        dp[i][0] = true;
    }

    dp[0][arr[0]] = true;

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            // not Take
            bool notTake = dp[i - 1][j];
            bool take = false;
            if (arr[i] <= j)
            {
                take = dp[i - 1][j - arr[i]];
            }

            dp[i][j] = take or notTake;
        }
    }
    return dp[n - 1][k];
}
int main()
{
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};
    int k = 9;
    cout << subsetSum(n, k, arr);
    return 0;
}

/*
  * Memoized Solution
bool solve(int ind, int target, int arr[], vector<vector<int>> &dp)
{
    // Base Cases
    if (target == 0)
        return true;
    if (ind == 0)
        return (target == arr[0]);

    if (dp[ind][target] != -1)
    {
        return dp[ind][target];
    }
    // not take
    bool notTake = solve(ind - 1, target, arr, dp);
    bool take = false;
    if (arr[ind] <= target)
    {
        take = solve(ind - 1, target - arr[ind], arr, dp);
    }

    return dp[ind][target] = take || notTake;
}

bool subsetSum(int n, int k, int arr[])
{
    vector<vector<int>> dp(n, vector<int>(k + 1, -1));
    return solve(n - 1, k, arr, dp);
}
int main()
{
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};
    int k = 9;
    cout << subsetSum(n, k, arr);
    return 0;
}  */

/*
  * Normal Recursive Solution
bool solve(int ind, int target, int arr[])
{
    // Base Cases
    if (target == 0)
        return true;
    if (ind == 0)
        return (target == arr[0]);

    // not take
    bool notTake = solve(ind - 1, target, arr);
    bool take = false;
    if (arr[ind] <= target)
    {
        take = solve(ind - 1, target - arr[ind], arr);
    }

    return take || notTake;
}

bool subsetSum(int n, int k, int arr[])
{
    return solve(n - 1, k, arr);
}
int main()
{
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};
    int k = 19;
    cout << subsetSum(n, k, arr);
    return 0;
}    */
