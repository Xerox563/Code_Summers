#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int l = 1, r = n;
        for (int i = 1; i <= n; i++)
        {
            if (i & 1)
            {
                cout << l << " ";
                l++;
            }
            else
            {
                cout << r << " ";
                r--;
            }
        }
        cout << endl;
    }
    return 0;
}