#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &a, vector<int> &b, int n)
{
    unordered_map<int, int> max_freq_a;
    unordered_map<int, int> max_freq_b;

    // Calculate the maximum contiguous frequency for each element in a
    for (int i = 0; i < n;)
    {
        int j = i;
        while (j < n && a[j] == a[i])
            ++j;
        max_freq_a[a[i]] = max(max_freq_a[a[i]], j - i);
        i = j;
    }

    // Calculate the maximum contiguous frequency for each element in b
    for (int i = 0; i < n;)
    {
        int j = i;
        while (j < n && b[j] == b[i])
            ++j;
        max_freq_b[b[i]] = max(max_freq_b[b[i]], j - i);
        i = j;
    }

    // Combine the frequencies to get the maximum length in the merged array
    int max_len = 0;
    for (auto &p : max_freq_a)
    {
        int element = p.first;
        int total_freq = p.second + max_freq_b[element];
        max_len = max(max_len, total_freq);
    }
    for (auto &p : max_freq_b)
    {
        if (max_freq_a.find(p.first) == max_freq_a.end())
        {
            max_len = max(max_len, p.second);
        }
    }

    return max_len;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i)
        {
            cin >> b[i];
        }
        cout << solve(a, b, n) << "\n";
    }
    return 0;
}
