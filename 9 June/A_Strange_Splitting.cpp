#include <bits/stdc++.h>
using namespace std;
int main()
{
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
        string s(n, 'R');
        s[1] = 'B';
        set<int> st(arr.begin(), arr.end());
        if (st.size() == 1 && n > 2)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            cout << s << endl;
        }
    }
    return 0;
}