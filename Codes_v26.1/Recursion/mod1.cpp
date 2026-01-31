#include <bits/stdc++.h>
using namespace std;

// Print Subsets,powerset,subsequences
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
void uniqueSolve(string ip, string op, int i)
{
    if (ip.length() == i)
    {
        cout << op << " ";
        return;
    }

    int next = i + 1;
    while (next != ip.length() && ip[next] == ip[i])
    {
        next++;
    }
    // case 1 : not pick
    string op1 = op;
    uniqueSolve(ip, op1, next);

    // case 2: pick
    string op2 = op;
    op2 += ip[i];

    uniqueSolve(ip, op2, i + 1);
    return;
}

// trick : add charcter with space or without space
void permutationWithSpaces(string &ip, string op, int i)
{
    if (i == ip.length())
    {
        cout << op << ' ';
        return;
    }

    // take current character
    char ch = ip[i];

    // OPTION 1: without space
    string op1 = op + ch;

    // OPTION 2: with space
    string op2 = op + "_" + ch;

    // go to next character
    permutationWithSpaces(ip, op1, i + 1);
    permutationWithSpaces(ip, op2, i + 1);
    return;
}
// trick : permutation with case change
void permutationWithCaseChange(string &ip, string op, int i)
{
    if (i == ip.length())
    {
        cout << op << ' ';
        return;
    }

    // OPTION 1: do not change
    string op1 = op;

    // OPTION 2: change ith character to uppercase
    char ch = ip[i];
    char x = toupper(ch);
    string op2 = op;
    op2[i] = x;

    // go to next character
    permutationWithCaseChange(ip, op1, i + 1);
    permutationWithCaseChange(ip, op2, i + 1);
    return;
}

void permutationWithCaseChangeII(string ip, string op)
{
    if (ip.length() == 0)
    {
        cout << op << ' ';
        return;
    }

    char ch = ip[0];
    // OPTION 1: do not change
    string op1 = op + ch;

    // OPTION 2: change ith character to uppercase
    string op2 = op + (char)toupper(ch);

    ip.erase(ip.begin() + 0);
    permutationWithCaseChangeII(ip, op1);
    permutationWithCaseChangeII(ip, op2);
}

int main()
{
    string ip;
    cin >> ip;
    // sort(ip.begin(), ip.end());
    string op = "";
    // op += ip[0];
    // solve(ip, op);
    // uniqueSolve(ip, op, 0);
    permutationWithCaseChangeII(ip, op);
    return 0;
}