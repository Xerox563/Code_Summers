#include <bits/stdc++.h>
using namespace std;
int main()
{
    int b, g, n;
    cin >> b >> g >> n;
    int min_boys = max(0, n - g);
    int max_boys = min(n, b);
    cout << (max_boys - min_boys) + 1 << endl;
}