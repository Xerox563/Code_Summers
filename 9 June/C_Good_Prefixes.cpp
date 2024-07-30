#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) 
            cin >> arr[i];
        unordered_set<int> mp; // Fix: Correct usage of unordered_map
        int ans = 0;
        int curr = 0;
        for (int i = 0; i < n; i++) {
            curr += arr[i];
            mp.insert(arr[i]);
            if (curr % 2 == 0) {
                int reqd = curr >> 1;
                if (mp.count(reqd)) 
                    ans ++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
