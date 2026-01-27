#include <bits/stdc++.h>
using namespace std;
// Binary Search
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
}
// Lower Bound
int lowerBound(vector<int> &arr, int x)
{
    int s = 0, e = arr.size() - 1;
    int ans = arr.size();
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] > x)
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}
// Upper Bound
int upperBound(vector<int> &arr, int x)
{
    int s = 0, e = arr.size() - 1;
    int ans = arr.size();
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] > x)
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}

// Floor
int floor(vector<int> &arr, int x)
{
    int s = 0, e = arr.size() - 1;
    int ans = arr.size();
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] <= x)
        {
            ans = arr[mid];
            s = mid + 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}

// Ceil
int ceil(vector<int> &arr, int x)
{
    int s = 0, e = arr.size() - 1;
    int ans = arr.size();
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] >= x)
        {
            ans = arr[mid];
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}

vector<int> searchRange(vector<int> &nums, int target)
{
    int fs = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
    if (fs == nums.size() || nums[fs] != target)
    {
        // first occurance exists
        return {-1, -1};
    }
    int ls = upper_bound(nums.begin(), nums.end(), target) - nums.begin() - 1;
    return {fs, ls};
}

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
    cout << "Floor: " << floor(arr, target) << endl;
    cout << "Ceil: " << ceil(arr, target) << endl;
    return 0;
}
