#include <bits/stdc++.h>
using namespace std;

long long solve(vector<long long> &arr, long long n)
{
    map<long, long> mp;
    for (auto x : arr)
    {
        mp[x]++;
    }
    // cloning
    vector<long long> arr1;
    arr1 = arr;
    vector<long long> arr2;
    arr1 = arr;
    // swap
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> arr(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }

        cout << solve(arr, n) << "\n";
    }
    return 0;
}
