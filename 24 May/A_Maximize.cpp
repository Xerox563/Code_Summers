#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    long long t;
    while (t--)
    {
        long long x;
        cin >> x;

        long long ans = 0;
        long long y = 0;
        for (int i = 0; i < x; i++)
        {
            y = gcd(x, i) + i;
            if (y > 0)
            {
                ans = y;
                y = i;
            }
        }
        cout << y << endl;
    }
    return 0;
}
