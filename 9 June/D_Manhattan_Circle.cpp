#include <bits/stdc++.h>
using namespace std;
void solve(vector<string> &arr, int n,int m)
{
    int min_i = numeric_limits<int>::max();
    int max_i = numeric_limits<int>::min();
    int min_j = numeric_limits<int>::max();
    int max_j = numeric_limits<int>::min();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == '#')
            {
                // Here Solution starts
                if (i < min_i)
                {
                    min_i = i;
                }
                if (i > max_i)
                {
                    max_i = i;
                }
                if (j < min_j)
                {
                    min_j = j;
                }
                if (j > max_j)
                {
                    max_j = j;
                }
            }
        }
    }

    int c_i = (min_i + max_i) / 2;
    int c_j = (min_j + max_j) / 2;

    c_i = c_i + 1;
    c_j = c_j + 1;

    cout << c_i << " " << c_j << endl;
}
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<string> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        solve(arr, n,m);
    }
    return 0;
}