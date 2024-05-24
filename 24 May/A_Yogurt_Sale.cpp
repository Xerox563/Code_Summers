#include <bits/stdc++.h>
using namespace std;

int getMinCost(int n, int a, int b)
{

    int cost_a = n * a;
    int cost_b = 0;
    if (n % 2 == 0)
    {
        cost_b = (n / 2) * b;
    }
    else
    {
        cost_b = ((n - 1) / 2) * b + a;
    }
    return min(cost_a, cost_b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, a, b;

        cin >> n >> a >> b;

        int result = getMinCost(n, a, b);
        cout << result << '\n';
    }

    return 0;
}
