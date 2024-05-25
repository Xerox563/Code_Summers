/* Print All Subsequences whoose Sum if K */

/* Pattern -> Pick / Not Pick  */

#include <bits/stdc++.h>
using namespace std;
void solve(int ind, int arr[], int n, vector<int> &ds, int target, int sum)
{
    if (ind == n)
    {
        if (sum == target)
        {
            // Print Subsequence
            for (auto x : ds)
            {
                cout << x << " ";
            }
            cout << endl;
        }
        return;
    }
    // picking
    ds.push_back(arr[ind]);
    sum += arr[ind];
    solve(ind + 1, arr, n, ds, target, sum);
    // poping out while backtracking
    ds.pop_back();
    sum -= arr[ind];
    // Not Pick
    solve(ind + 1, arr, n, ds, target, sum);
}
int main()
{
    int arr[] = {1, 2, 1};
    int n = 3;
    vector<int> ds;
    int target = 2;
    cout << "All possible subsequences are: " << endl;
    solve(0, arr, n, ds, target, 0);
}