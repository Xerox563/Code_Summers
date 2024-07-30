#include <bits/stdc++.h>
using namespace std;
int solve(int a, int b, int c)
{
    if (a == 0 && b == 0 && c == 0)
    {
        return 0;
    }
    bool flag = true;
    int tents = 0;
    tents += a;
    if (b < 3 && b != 0)
    {
        int y = 3 - b;
        if (c >= y)
        {
            c -= y;
            b += y;
        }
        else
        {
            flag = false;
        }

        tents += 1;
    }
    else
    {
        tents += b / 3;
        b = b % 3;
        if (b != 0)
        {
            int y = 3 - b;
            if (c >= y)
            {
                c -= y;
                b += y;
            }
            else
            {
                flag = false;
            }

            tents += 1;
        }
    }
   
    // Now For c
    tents += c / 3;
    if (c % 3)
    {
        tents++;
    }

    if (flag == false)
    {
        return -1;
    }
    else
    {
        return tents;
    }
}
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        cout << solve(a, b, c) << endl;
    }
    return 0;
}