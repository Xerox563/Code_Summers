
/* Time -> O(T* (N + N)) => O(T*N) < 10^6 */
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int testCases;
    cin >> testCases;
    while (testCases--)
    {
        int n, q;
        cin >> n >> q;
        int a[n + 10];
        // To Store forward GCD
        int forward[n + 10];
        // To Store Backward GCD
        int backward[n + 10];
        for (int i = 0; i <= n; i++)
        {
            cin >> a[i];
        }

        // PreComputing GCd

        for (int i = 1; i <= n; i++)
        {
            forward[i] = __gcd(forward[i - 1], a[i]);
        }

        for (int j = n; j >= 1; j--)
        {
            backward[j] = __gcd(backward[j + 1], a[j]);
        }

        while (q--)
        {
            int l, r;
            cin >> l >> r;

            cout << __gcd(forward[l - 1], backward[r + 1]) << endl;
        }
    }
    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int testCases;
    cin >> testCases;
    while (testCases--)
    {
        int n, q;
        cin >> n >> q;
        int a[n + 10];

        for (int i = 0; i <= n; i++)
        {
            cin >> a[i];
        }

        while (q--)
        {
            int l, r;
            cin >> l >> r;
            int gc = 0;
            // gcd of 0 => l-1 numbers
            for (int i = 0; i <= l - 1; i++)
            {
                gc = __gcd(gc, a[i]);
            }

            // gcd of r+1 => n numbers
            for (int i = r + 1; i <= n; i++)
            {
                gc = __gcd(gc, a[i]);
            }

            cout << gc << endl;
        }
    }
    return 0;
}
/* Code to run in 1sec => < 10^7 iterations
time->O(T *(N + Q * N))   */
