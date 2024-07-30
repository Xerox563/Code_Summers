#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string str;
        cin >> str;
        unordered_map<char, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[str[i]]++;
        }
        int cnt = 0;
        for (auto x : mp)
        {
            if ((x.second % 2) == 1)
            {
                cnt++;
            }
        }
        if (n == 1)
        {
            cout << "YES" << endl;
        }
        else if (cnt > k + 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}