#include <bits/stdc++.h>
using namespace std;

int shipsShrunk(int n, int k)
{
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int i = 0;
    int j = n - 1;
    int c = 0;

    while (k-- > 0)
    {
        if (c % 2 == 0)
        {
            if (arr[i] > 0)
            {
                arr[i] -= 1;
                if (arr[i] == 0)
                {
                    i++;
                }
            }
        }
        else
        {
            if (arr[j] > 0)
            {
                arr[j] -= 1;
                if (arr[j] == 0)
                {
                    j--;
                }
            }
        }
        c++;
    }

    // Count remaining ships
    int remainingShips = 0;
    for (int x : arr)
    {
        if (x > 0)
        {
            remainingShips++;
        }
    }

    return (n - remainingShips);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int result = shipsShrunk(n, k);
        cout << result << '\n';
    }

    return 0;
}

