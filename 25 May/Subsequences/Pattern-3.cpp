/* Coutnof Subsequences whose Sum k */

/*
  * For Two Recursion Calls
 int f() {
   Base Case
   return 1 => If Condition Satisfies
   return 0 => If Condition not Satisfies

   l = f()
   r = f()

   return l +r;
 }


  * For Multiple Recursion Calls
 int f() {
   Base Case
   return 1 => If Condition Satisfies
   return 0 => If Condition not Satisfies

   s = 0;
   for(int i=0;i<calls;i++) {
    s+=f(call for i);
   }

   return l +r;
 }

 */

#include <bits/stdc++.h>
using namespace std;
int solve(int ind, int arr[], int n, int target, int sum)
{
    if (ind == n)
    {
        // Condition Satisfied
        if (sum == target)
        {
            // Print Subsequence
            return 1;
        }
        else
            return 0;
    }
    // picking

    sum += arr[ind];
    int l = solve(ind + 1, arr, n, target, sum);

    sum -= arr[ind];
    // Not Pick
    int r = solve(ind + 1, arr, n, target, sum);

    return l + r;
}
int main()
{
    int arr[] = {1, 2, 1};
    int n = 3;
    vector<int> ds;
    int target = 2;
    cout << "Count :: " << solve(0, arr, n, target, 0);
}
