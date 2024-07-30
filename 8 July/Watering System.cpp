#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, A, B, total = 0;
    cin >> n >> A >> B;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        total += arr[i];
    }
    sort(arr.begin() + 1, arr.end());

    int first = arr[0];
    int cnt = 0;
    for (int i = n - 1; i > 0; i--)
    {
        if (first * A / total >= B)
        {
            break;
        }
        total -= arr[i];
        cnt++;
    }
    cout << cnt << endl;
}