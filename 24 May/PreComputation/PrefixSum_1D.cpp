/*  Given a array a on N integers. Givem Q Queries and in each query given L and R . Print sum of array Elements from index L to R(L, R included)  */

/* Prefix Sum Technique */
/* Time -> O(N) + O(Q) */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int prefixSum[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    }

    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        int sum = 0;
        sum = prefixSum[r] - prefixSum[l - 1];
        cout << sum << endl;
    }
    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        int sum = 0;
        for (int i = l; i <= r; i++)
        {
            sum += arr[i];
        }
        cout << sum << endl;
    }
    return 0;
}  */