#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> arr, int n, int k)
{
    int ans = INT_MAX;
    int cnt = 0;
    for (auto it : arr)
    {
        if (it % k == 0)
        {
            ans = 0;
        }
        else
        {
            ans = min(k - it % k, ans);
        }

        if (it % 2 == 0)
        {
            cnt++;
        }
    }
    if (k == 4)
    {
        ans = min(ans, (2 - min(2, cnt)));
    }
    return ans;
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
        long long n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << solve(arr, n, k) << endl;
    }
    return 0;
}