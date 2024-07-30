#include <bits/stdc++.h>
using namespace std;

long long solve(vector<long long> &a, vector<long long> &b, long long n, long long p)
{
    vector<pair<long long, long long>> arr;
    for (int i = 0; i < n; i++)
    {
        arr.push_back({b[i], a[i]});
    }

    sort(arr.begin(), arr.end());

    map<long long, long long> mp;
    mp[p] = n + 100;
    long long ans = 0;
    for(auto &x: arr) {
        long long mn = (*mp.begin()).first;
        ans+=mn;
        mp[mn]--;
        mp[x.first]+= x.second;
        if(mp[mn] == 0) mp.erase(mn);
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        long long n, p;
        cin >> n >> p;
        vector<long long> a(n), b(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i)
        {
            cin >> b[i];
        }
        cout << solve(a, b, n, p) << "\n";
    }
    return 0;
}
