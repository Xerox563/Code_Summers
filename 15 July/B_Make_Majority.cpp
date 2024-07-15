#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        string str;
        cin >> n >> str;
        // bool flag = true;
        if (n == 1 && str[0] == '0')
        {
            cout << "No" << endl;
        }
        else if (n == 1 && str[0] == '1')
        {
            cout << "Yes" << endl;
        }
        else if (n == 2 && (str == "01" || str == "10"))
        {
            cout << "No" << endl;
        }
        else
        {
            int cnt = 0;
            string ans = "";
            for (int i = 0; i < n; i++)
            {
                if (str[i] == '1')
                {
                    if (cnt != 0)
                    {
                        ans += '0';
                        ans += str[i];
                        cnt = 0;
                    }
                    else
                    {
                        ans += str[i];
                    }
                }
                else if (str[i] == '0')
                {
                    cnt++;
                }
            }
            if (cnt != 0)
            {
                ans += '0';
            }

            int zeroes = 0, ones = 0;
            for (auto ch : ans)
            {
                if (ch == '0')
                {
                    zeroes++;
                }
                else
                {
                    ones++;
                }
            }
            if (zeroes >= ones)
            {
                cout << "No" << endl;
            }
            else
            {
                cout << "Yes" << endl;
            }
        }
    }
    return 0;
}