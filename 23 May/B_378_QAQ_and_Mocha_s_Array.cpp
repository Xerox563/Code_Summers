#include <bits/stdc++.h>
using namespace std;
void solve(vector<int> arr, int n)
{
    sort(arr.begin(), arr.end());

    int first_divisor = arr[0];
    int second_divisor_index = -1;
    bool is_beautiful = true;

    for (int i = 1; i < n; i++)
    {

        if (arr[i] % first_divisor != 0)
        {
            // If second_divisor_index is not set, set it
            if (second_divisor_index == -1)
            {
                second_divisor_index = i;
            }
            // If second_divisor_index is set, check if the element is divisible by the second divisor
            else if (arr[i] % arr[second_divisor_index] != 0)
            {
                // If the element is not divisible by either divisor, mark the array as not beautiful
                is_beautiful = false;
                break;
            }
        }
    }
    if (is_beautiful)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        solve(arr, n);
    }
    return 0;
}