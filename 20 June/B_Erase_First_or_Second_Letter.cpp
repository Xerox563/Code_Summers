#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string str;
        cin >> str;
        vector<int> vis(26);
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (!vis[str[i] - 'a'])
            {
                vis[str[i] - 'a'] = 1; // Found that character
                ans += (n - i);        // Add characters after this .
            }
        }

        cout << ans << endl;
    }
}