#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);


    long long N, Q;
    cin >> N >> Q;
    string S;
    cin >> S;

    // Precompute the prefix sums of consecutive same characters
    vector<int> prefix(N, 0);
    for (int i = 1; i < N; ++i)
    {
        prefix[i] = prefix[i - 1];
        if (S[i] == S[i - 1])
        {
            prefix[i]++;
        }
    }

    // Answer each query
    while (Q--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;

        cout << prefix[r] - prefix[l] << endl;
    }

    return 0;
}
