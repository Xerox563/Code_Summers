#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long tc;
    cin >> tc;
    while (tc--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        for (int i = 0; i < 5; i++)
        {
            if (a <= b && a <= c)
            {
                a++;
            }
            else if (a >= b && b <= c)
            {
                b++;
            }
            else
            {
                c++;
            }
        }
        cout << a * b * c << endl;
    }
    return 0;
}