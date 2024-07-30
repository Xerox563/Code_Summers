#include <bits/stdc++.h>
using namespace std;

string calc(vector<int> &arr, long long fav, long long f, long long k, long long n)
{

    sort(arr.rbegin(), arr.rend());

    int z = count(arr.begin(), arr.begin() + k, fav);
    int y = count(arr.begin(), arr.end(), fav);

    if (z == y)
    {
        return "YES";
    }
    else if (z == 0)
    {
        return "NO";
    }
    else
    {
        return "MAYBE";
    }
}

int main()
{
    long long tc;
    cin >> tc;
    while (tc--)
    {
        long long n, f, k;
        cin >> n >> f >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long fav = arr[f - 1];
        cout << calc(arr, fav, f, k, n) << endl;
    }
    return 0;
}
