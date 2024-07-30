#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long tc;
    cin >> tc;
    while (tc--)
    {
        string s;
        cin >> s;
        string ans = "";
        vector<int> upper;
        vector<int> lower;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'b')
            {
                if (!lower.empty())
                {
                    int ind = lower.back();
                    lower.pop_back();
                    ans[ind] = '$';
                }
            }
            else if (s[i] == 'B')
            {
                if (!upper.empty())
                {
                    int ind = upper.back();
                    upper.pop_back();
                    ans[ind] = '$';
                }
            }
            else
            {
                if (isupper(s[i]))
                {
                    upper.push_back(ans.size());
                }
                else
                {
                    lower.push_back(ans.size());
                }
                ans += s[i];
            }
        }

        // Remove all '$' characters from ans
        ans.erase(remove(ans.begin(), ans.end(), '$'), ans.end());

        cout << ans << endl;
    }
    return 0;
}
