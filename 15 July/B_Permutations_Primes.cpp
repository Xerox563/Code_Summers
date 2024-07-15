#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        if (n == 1)
        {
            cout << "1" << endl;
        }
        else if (n == 2)
        {
            cout << "2 1" << endl;
        }
        else
        {
            int c = 4;
            vector<int> v(n, 0);
            v[0] = 2;
            v[n - 1] = 3;
            v[n / 2] = 1;
            for (int i = 0; i < n; i++)
            {
                if (v[i] == 0)
                {
                    v[i] = c++;
                }
            }
            for (int i = 0; i < n; i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
        }
    }
}