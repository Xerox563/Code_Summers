#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long N, Q;
    cin >> N >> Q;
    string str;
    cin >> str;
    /* Solution Goes here */
    // precompute
    int cnt = 0;
    vector<int> prefix(N);
    int pre = str[0];
    for(int i=1;i<=N;i++) {
        if(str[i] == pre) {
            cnt++;
        }
        pre
    }
    return 0;
}