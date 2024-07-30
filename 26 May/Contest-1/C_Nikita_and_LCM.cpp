#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> arr, int n)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = ; ij < n; j++)
        {
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < arr.size(); i++)
        {
            cin >> arr[i];
        }
        cout << solve(arr, n) << endl;
    }

    return 0;
}
