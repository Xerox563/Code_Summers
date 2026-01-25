#include <bits/stdc++.h>
using namespace std;
int search(vector<int> &nums, int target)
{
    int ans = -1;
    // for(int i=0;i<nums.size();i++) {
    //     if(nums[i] == target) {
    //         ans = i;
    //         break;
    //     }
    // }
    // return ans;
    int s = 0, e = nums.size() - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (nums[mid] == target)
        {
            ans = mid;
            break;
        }
        else if (nums[mid] > target)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
};
int main()
{
    int n, target;
    cin >> n >> target;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << search(arr, target) << endl;
    return 0;
}
