#include <bits/stdc++.h>
using namespace std;

vector<int> solve(int num)
{
    vector<int> ans;
    // Progressing to the Soluition
    while (num > 0)
    {
        if (num % 2 == 0)
        {
            ans.push_back(0);
        }
        else
        {

            if ((num % 4 == 1) || (num == 1))
            {
                ans.push_back(1);
            }
            else
            {
                ans.push_back(-1);
                num += 1;
            }
        }
        num /= 2;
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        vector<int> p = solve(x);
        cout << p.size() << "\n";
        for (int i = 0; i < p.size(); i++)
        {
            if (i > 0)
                cout << " ";
            cout << p[i];
        }
        cout <<endl;
    }

    return 0;
}
