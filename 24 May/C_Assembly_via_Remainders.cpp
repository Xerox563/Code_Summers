#include <bits/stdc++.h>
using namespace std;

void getArray(int n, vector<int> &x, vector<int> &ans)
{

    ans[n - 1] = 1e9;
    for (int i = n - 2; i >= 0; i--)
    {
        ans[i] = ans[i + 1] - x[i];
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> x(n - 1);
        for (int i = 0; i < n - 1; i++)
        {
            cin >> x[i];
        }

        vector<int> ans(n);
        getArray(n, x, ans);

        for (auto val : ans)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
