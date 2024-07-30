#include <bits/stdc++.h>
using namespace std;

int solve(int x, int n)
{
    int sum = 0;
    int i = 1;
    while (x * i <= n)
    {
        sum += x * i;
        i++;
    }

    return sum;
}
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr;
        for (int i = 2; i <= n; i++)
        {
            arr.push_back(i);
        }

        int temp_ans = INT_MIN;
        int ans = -1;
        for (int i = 0; i < arr.size(); i++)
        {
            int sum = 0;
            sum += solve(arr[i], n);
            if (sum > temp_ans)
            {
                temp_ans = sum;
                ans = arr[i];
            }
        }
        cout << ans << endl;
    }
    return 0;
}