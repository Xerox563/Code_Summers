#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        ll n, k, x;
        cin >> n >> k >> x;
        ll low = (k * (k + 1)) / 2;
        ll high = (n * (n + 1)) / 2 - ((n - k) * (n - k + 1)) / 2;
        if (x >= low && x <= high)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

 
    }
}