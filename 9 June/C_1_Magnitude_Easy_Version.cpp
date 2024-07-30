#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> arr(n+1);
        vector<long long> dp1(n + 1);
        vector<long long> dp3(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 1; i <= n; i++)
        {
            if (arr[i] > 0)
            {
                dp3[i] = dp3[i - 1] + arr[i];
                dp1[i] = max(abs(dp3[i - 1] + arr[i]), dp1[i - 1] +arr[i]);
            } else {
                dp3[i] = dp3[i - 1] + arr[i];
                dp1[i] = max(abs(dp3[i - 1] + arr[i]), dp1[i - 1] +arr[i]);
            }
        }
        cout<<dp1[n]<<endl;
    }
    return 0;
}