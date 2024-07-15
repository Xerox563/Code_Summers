#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, k, q;
        cin >> n >> k >> q;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            if (v[i] <= q)
            {
                arr.push_back(v[i]);
            }
        }
        cout << endl;
    }
    return 0;
}