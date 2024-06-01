/* #include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> arr(n + 1);
        arr[0] = 1000;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '>')
            {
                arr[i + 1] = arr[i] - 1;
            }
            else
            {
                arr[i + 1] = arr[i] + 1;
            }
        }

        unordered_set<int> st;
        for (auto x : arr)
        {
            st.insert(x);
        }
        cout << st.size() << endl;
    }
    return 0;
}  */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = 1, cur = 1;
        for (int i = 1; i < n; i++)
        {
            if (s[i] != s[i - 1])
                cur = 1;
            else
                cur++;
            ans = max(ans, cur);
        }
        cout << ans + 1 << endl;
    }
}
