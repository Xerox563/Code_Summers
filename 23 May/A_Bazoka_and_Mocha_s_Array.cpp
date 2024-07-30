#include <bits/stdc++.h>
using namespace std;
bool solve(vector<int> arr, int n)
{
    vector<int> a = arr;
    for (int i = 0; i < n; i++)
    {
        a.push_back(arr[i]);
    }
    int cnt = 1;
    for (int i = 1; i < 2 * n; i++)
    {
        if (a[i] >= a[i - 1])
        {
            cnt++;
        }
        else
        {
            cnt = 1;
        }
        if (cnt == n)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (solve(arr, n) == true)
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