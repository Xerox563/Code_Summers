#include <bits/stdc++.h>
using namespace std;

int main() {
    long long tc;
    cin >> tc;
    while (tc--) {
        long long n, m;
        cin >> n >> m;
        string str;
        cin >> str;
        long long ans = 0;
        unordered_map<char, int> mp;
        for (char ch : str) {
            mp[ch]++;
        }
        for (auto x : mp) {
            if (x.second < m) {
                ans += m - x.second;  
            }
        }
        int sz = mp.size();  
        int extra = m * (7 - sz);  
        cout << ans + extra << endl;
    }
    return 0;
}
