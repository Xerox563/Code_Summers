#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long tc;
    cin >> tc;
    while (tc--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> arr(k);
        for (int i = 0; i < k; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        int maxi = arr.back();
        int cnt1 = 0;
        int cnt2 = 0;
        for (int i = 0; i < k - 1; i++)
        {
            cnt1 += arr[i];
            cnt2 += arr[i] - 1;
        }

        cout << cnt1 + cnt2 << endl;
    }
    return 0;
}