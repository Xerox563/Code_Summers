#include <bits/stdc++.h>
using namespace std;

bool checkArray(int n, vector<int> &a, vector<int> &b, vector<int> &d)
{
    unordered_map<int, int> helper;

    for (auto x : d)
    {
        helper[x]++;
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            if (helper[b[i]] > 0)
            {
                helper[b[i]]--;
            }
            else
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{

    long long tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int m;
        cin >> m;
        vector<int> d(m);
        for (int i = 0; i < m; i++)
        {
            cin >> d[i];
        }

        if (checkArray(n, a, b, d) == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
