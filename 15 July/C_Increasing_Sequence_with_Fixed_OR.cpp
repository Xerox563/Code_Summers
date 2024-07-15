#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> ll_vector;

ll_vector calculateSequence(ll n)
{
    ll_vector result;
    ll ans = 0;
    ll_vector bit_positions;
    for (int i = 0; i < 64; i++)
    {
        if (n & (1ll << i))
        {
            ans++;
            bit_positions.push_back((1LL << i));
        }
    }
    ans++;
    result.push_back(n);
    for (auto it : bit_positions)
    {
        if (n - it > 0)
        {
            result.push_back(n - it);
        }
    }

    reverse(result.begin(), result.end());
    return result;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll_vector sequence = calculateSequence(n);

        cout << sequence.size() << endl;
        for (auto num : sequence)
        {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
