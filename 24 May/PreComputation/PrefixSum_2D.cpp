/*  Given a 2D array of N*N integers. Givem Q Queries and in each query given a,b,c and d. Print sum of  square represented by (a,b) as top left point and (c,d) as top bottom right point  */

/* Prefix Sum Technique */
/* Time -> O(N) + O(Q) */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n][n];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int q;
    cin >> q;
    while (q--)
    {
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int sum = 0;

        for (int i = x1; i <= x2; i++)
        {
            for (int j = y1; j <= y2; j++)
            {
                sum += arr[i][j];
            }
        }

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
    int arr[n][n];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int q;
    cin >> q;
    while (q--)
    {
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int sum = 0;

        for (int i = x1; i <= x2; i++)
        {
            for (int j = y1; j <= y2; j++)
            {
                sum += arr[i][j];
            }
        }

        cout << sum << endl;
    }
    return 0;
}
 Time -> O(N^2) + O(Q*N^2)  */
