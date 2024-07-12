#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long tc;
    cin >> tc;
    while (tc--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> ans;

        for (int i = n; i > m; i--)
        {
            ans.push_back(i);
        }

        for (int j = 1; j <= m; j++)
        {
            ans.push_back(j);
        }


        for(int i=0;i<ans.size();i++) {
            cout<<ans[i]<< " "; 
        }
        cout<<"\n";

    }
    return 0;
}
