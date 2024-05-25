/*
 * Given array a of N integers. given Q queries and in eahc query given a number X,print count of that number in an array .
 * Constraints
   -> 1 <= N <= 10^5
   -> 1 <= a[i] <= 10^7
   -> 1 <= Q <= 10^5
 */

/*  Using PreComputation Technique */
/* Cant be used when a[i] > 10^7*/
/* Time -> O(Q) + O(n)*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        int cnt = mp[x];
        cout << cnt << endl;
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
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (x == a[i])
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}  */
