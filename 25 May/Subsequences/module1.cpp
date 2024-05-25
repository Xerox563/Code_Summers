/* Subsequence -> Contigious / Non Contigious Sequence but the order should be Followed .. */
/* arr: [3,1,2]  -> Number = 2^n Subsequences (n-length array/ string)
   -> {}
   -> {3}
   -> {1}
   -> {2}
   -> {3,1}
   -> {3,2}
   -> {3,1,2}
   -> {1,2}
  */

/* Pattern -> Pick / Not Pick  */

#include <bits/stdc++.h>
using namespace std;
void solve(int i, string s, string &f)
{
    if (i == s.length())
    {
        cout << f << " ";
        return;
    }
    // picking
    f = f + s[i];
    solve(i + 1, s, f);
    // poping out while backtracking
    f.pop_back();
    solve(i + 1, s, f);
}
int main()
{
    string s = "abc";
    string f = "";
    cout << "All possible subsequences are: " << endl;
    solve(0, s, f);
}