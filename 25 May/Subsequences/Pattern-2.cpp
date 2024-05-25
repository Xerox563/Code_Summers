/* Print 1 Subsequence whoose Sum is K */

/*
  * Technique to Print One Answer
  f() {
    base case
    conditon Satisfied
      return true;
    else
      return false;
  }

  if(f() == true) {
    return ;  We got a Subsequence so return .

  } 

*/
/* Pattern -> Pick / Not Pick  */

#include <bits/stdc++.h>
using namespace std;
bool solve(int ind, int arr[], int n, vector<int> &ds, int target, int sum)
{
    if (ind == n)
    {
        /* Condition Satisfied */
        if (sum == target)
        {
            // Print Subsequence
            for (auto x : ds)
            {
                cout << x << " ";
            }
            cout << endl;
            return true;
        }
        /* Condition Not Satisfied */
        return false;
    }
    // picking
    ds.push_back(arr[ind]);
    sum += arr[ind];
    if (solve(ind + 1, arr, n, ds, target, sum) == true)
    {
        return true;
    }
    // poping out while backtracking
    ds.pop_back();
    sum -= arr[ind];
    // Not Pick
    if (solve(ind + 1, arr, n, ds, target, sum) == true)
    {
        return true;
    }
    return false;
}
int main()
{
    int arr[] = {1, 2, 1};
    int n = 3;
    vector<int> ds;
    int target = 3;
    cout << "All possible subsequences are: " << endl;
    solve(0, arr, n, ds, target, 0);
}