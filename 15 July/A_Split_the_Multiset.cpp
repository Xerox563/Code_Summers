#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int num, k;
        cin >> num >> k;
        int ans = 0;
        /* if (k > n)
         {
             cout << "0" << endl;
         }
         else if (n % 2 == 0)
         {
             ans += 1 + n / k;
             cout << ans << endl;
         }
         else
         {
             ans += 2 + n / k;
             cout << ans << endl;
         }  */
        while (num > 1)
        {
            num = num - (k - 1);
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}