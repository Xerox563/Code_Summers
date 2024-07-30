#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        string s;
        cin >> n >> s;
        set<int> z;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                z.insert(i);
            }
        }

        int ans = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == '1')
            {
                if (z.empty())
                {
                    ans = -1;
                   // break;
                }
                else
                {
                    ans += i - *z.rbegin();
                    s[*z.rbegin()] = '1';
                    z.erase(--z.end());
                }
            }
            else if (z.size() && *z.rbegin() == i)
            {
                z.erase(i);
            }
            cout << ans << " ";
        }
        cout << "\n";
    }
    return 0;
}
