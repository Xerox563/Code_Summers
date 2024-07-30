#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b, x, y;
    cin >> a >> b >> x >> y;
    long long gc = __gcd(x, y);
    x = x / gc;
    y = y / gc;
    long long cnt = 0;
    // for (int i = 1; i <= a; i++)
    // {
    //     for (int j = 1; j <= b; j++)
    //     {
    //         if (a / b == x / y)
    //         {
    //             cnt++;
    //         }
    //     }
    // }
    cnt = min({a / x, b / y});

    cout << cnt << endl;

    return 0;
}