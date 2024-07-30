#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long tc;
    cin >> tc;
    while (tc--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> arr(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }
        vector<vector<int>> brr(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> brr[i][j];
            }
        }

        vector<int> tmp1, tmp2;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                tmp1.push_back(arr[i][j]);
                tmp2.push_back(brr[i][j]);
            }
        }

        sort(tmp1.begin(), tmp1.end());
        sort(tmp2.begin(), tmp2.end());
        if (tmp1 == tmp2)
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