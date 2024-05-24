#include <bits/stdc++.h>
using namespace std;

int getMaxPrefixLength(const string &a, const string &b)
{
    int n = a.length();
    int m = b.length();
    int ans = 0;
    long long i = 0, j = 0;
    while (i < n && j < m)
    {
        if (a[i] == b[j])
        {
            ans++;
            i++;
            j++;
        }
        else
        {
            j++;
        }
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;

        int result = getMaxPrefixLength(a, b);
        cout << result << '\n';
    }

    return 0;
}
