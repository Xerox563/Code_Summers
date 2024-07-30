#include <bits/stdc++.h>
using namespace std;
long long solve(long long a, long long b, long long m)
{
    long long ans = m / a + m / b + 2;
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
        long long a, b, m;
        cin >> a >> b >> m;
        cout << solve(a, b, m) << endl;
    }
    return 0;
}