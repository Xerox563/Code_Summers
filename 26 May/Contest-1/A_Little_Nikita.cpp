#include <bits/stdc++.h>
using namespace std;
string solve(int n, int m)
{

    if (m == n)
    {
        return "YES";
    }
    if (m > n)
    {
        return "NO";
    }
    else
    {
        if ((n - m) % 2 == 0)
        {
            return "YES";
        }
        else
        {
            return "NO";
        }
    }
}
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        cout << solve(n, m) << endl;
    }
    return 0;
}