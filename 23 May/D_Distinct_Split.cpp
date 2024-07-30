#include <bits/stdc++.h>
using namespace std;
long long solve(string str, int n)
{
    for (int j = 0; j < n - 1; j++)
    {
        int split = j;
        int ans = INT_MIN;
        int cnt = 0;
        for (int i = 0; i <= split; i++)
        {
            unordered_map<char, int> mp;
            mp[str[i]]++;
            cnt += mp.size();
        }
        for (int i = split + 1; i < n; i++)
        {
            unordered_map<char, int> mp;
            mp[str[i]]++;
            cnt += mp.size();
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str;
        for (int i = 0; i < n; i++)
        {
            cin >> str[i];
        }
        cout << solve(str, n) << endl;
    }
    return 0;
}