#include <bits/stdc++.h>
using namespace std;
void solve(string ip, string op)
{
    if (ip.length() == 0)
    {
        cout << op << " ";
        return;
    }
    // case 1 : not pick
    string op1 = op;

    // case 2: pick
    string op2 = op;
    op2 += ip[0];
    ip.erase(ip.begin() + 0);
    solve(ip, op1);
    solve(ip, op2);
    return;
}
int main()
{
    string ip;
    cin >> ip;
    string op = "";
    solve(ip, op);
    return 0;
}