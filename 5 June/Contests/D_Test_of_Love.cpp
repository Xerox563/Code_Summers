#include <bits/stdc++.h>
using namespace std;

bool solve(string str, int n, int m, int k)
{
    queue<pair<int, int>> q;
    set<pair<int, int>> vis;
    q.push({0, 0});
    vis.insert({0, 0});

    while (!q.empty())
    {
        auto temp = q.front();
        int p = temp.first;
        int sm = temp.second;
        q.pop();

        if (p == n + 1)
        {
            return true;
        }

        if (p == 0 || str[p - 1] == 'L')
        {
            for (int j = 1; j <= m; ++j)
            {
                int qu = p + j;
                if (qu == n + 1 || (qu <= n && str[qu - 1] != 'C'))
                {
                    if (vis.find({qu, sm}) == vis.end())
                    {
                        q.push({qu, sm});
                        vis.insert({qu, sm});
                    }
                }
            }
        }

        if (p > 0 && p <= n && str[p - 1] == 'W' && sm < k)
        {
            int qu = p + 1;
            if (qu == n + 1 || (qu <= n && str[qu - 1] != 'C'))
            {
                if (vis.find({qu, sm + 1}) == vis.end())
                {
                    q.push({qu, sm + 1});
                    vis.insert({qu, sm + 1});
                }
            }
        }
    }

    return false;
}

int main()
{
    int tc;
    cin >> tc;
    vector<string> ans;

    while (tc--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        string str;
        cin >> str;
        bool flag = solve(str, n, m, k);
        if (flag)
        {
            ans.push_back("YES");
        }
        else
        {
            ans.push_back("NO");
        }
    }

    for (auto x : ans)
    {
        cout << x << "\n";
    }

    return 0;
}
