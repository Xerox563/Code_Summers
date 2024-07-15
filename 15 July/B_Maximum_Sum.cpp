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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        /* int i = 0;
         int j = n - 1;
         while (i < j && k > 0)
         {
             long long l_sum = arr[i] + arr[i + 1];
             long long r_sum = arr[j];
             if (l_sum > r_sum)
             {
                 arr.erase(arr.begin() + j);
                 j--;
             }
             else
             {
                 auto s = arr.begin() + i;
                 auto e = arr.begin() + i + 2;
                 arr.erase(s, e);
                 j -= 2;
             }
             k--;
         }    */
      //  int sum = 0;
        vector<long long> pre(n + 1);
        long long maxSum = 0;
        for (long long i = 0; i < n; i++)
        {
           // sum += arr[i];
            pre[i + 1] = pre[i] + arr[i];
        }

        for (long long i = 0; i <= k; i++)
        {
            maxSum = max(maxSum, pre[n - i] - pre[2 * (k - i)]);
        }
        //   long long maxSum = accumulate(arr.begin(), arr.end(), 0);
        cout << maxSum << endl;
    }
    return 0;
}
