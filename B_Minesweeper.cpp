#include <bits/stdc++.h>
using namespace std;

bool inside(int r, int c, int n, int m)
{
    return r >= 0 && c >= 0 && r < n && c < m;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<char>> s(n, vector<char>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> s[i][j];
        }
    }

    int dx[] = {1, -1, 0, 0, 1, 1, -1, -1};
    int dy[] = {0, 0, 1, -1, 1, -1, 1, -1};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (s[i][j] == '.')
            {
                for (int k = 0; k < 8; k++)
                {
                    int x = i + dx[k];
                    int y = j + dy[k];

                    if (inside(x, y, n, m) && s[x][y] == '*')
                    {
                        cout << "NO" << endl;
                        return 0;
                    }
                }
            }
            else if (s[i][j] != '*')
            {
                int cnt = 0;
                for (int k = 0; k < 8; k++)
                {
                    int x = i + dx[k];
                    int y = j + dy[k];

                    if (inside(x, y, n, m) && s[x][y] == '*')
                    {
                        cnt++;
                    }
                }
                if (cnt != (s[i][j] - '0'))
                { // convert char digit to integer
                    cout << "NO" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "YES" << endl;
    return 0;
}
