#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
#define iter(i, l, r) for (ll i = l; i < r; i++)

bool isPossible(ll day, ll n, ll p, ll l, ll t)
{
    ll tasks = ((n + 6) / 7);
    ll maxTasks = min(tasks, (n - day) * 2);

    return ((n - day) * l) + (maxTasks * t) >= p;
}

int main()
{
    ll numberOfTestCases;
    cin >> numberOfTestCases;

    vector<ll> toShow;

    iter(_, 0, numberOfTestCases)
    {
        ll n, p, l, t;
        cin >> n >> p >> l >> t;

        ll start = 0;
        ll ender = n;
        while (ender - start > 1)
        {
            ll mid = (start + ender) / 2;

            if (isPossible(mid, n, p, l, t))
            {
                start = mid;
            }
            else
            {
                ender = mid;
            }
        }

        toShow.push_back(start);
    }

    for (ll x : toShow)
    {
        cout << x << "\n";
    }

    return 0;
}