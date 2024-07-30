#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    string ans = "";
    vector<char> str = {'a', 'a', 'b', 'b'};
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        ans += str[j];
        j++;
        if(j == 4) {
            j = 0;
        }
    }
    cout << ans << endl;
}