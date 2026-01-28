#include <bits/stdc++.h>
using namespace std;
vector<int> nextGreaterElements(vector<int> &arr)
{
    stack<int> st;
    int n = arr.size();
    vector<int> ans(n);
    ans[n - 1] = -1;
    st.push(arr[n - 1]);
    for (int i = n - 2; i >= 0; i--)
    {
        while (!st.empty() && st.top() <= arr[i])
        {
            st.pop();
        }
        if (!st.empty())
        {
            ans[i] = st.top();
        }
        else
        {
            ans[i] = -1;
        }
        st.push(arr[i]);
    }

    return ans;
}
vector<int> nextGreaterElementsII(vector<int> &arr)
{
    stack<int> st;
    int n = arr.size();
    vector<int> ans(n);
    for (int i = 2 * n - 1; i >= 0; i--)
    {

        while (!st.empty() && arr[i % n] >= st.top())
        {
            st.pop();
        }
        if (i < n)
        {
            if (!st.empty())
            {
                ans[i] = st.top();
            }
            else
            {
                ans[i] = -1;
            }
        }
        st.push(arr[i % n]);
    }

    return ans;
}

vector<int> nextSmallerElement(vector<int> &arr)
{
    stack<int> st;
    int n = arr.size();
    vector<int> ans(n);
    ans[n - 1] = -1;
    st.push(arr[n - 1]);
    for (int i = n - 2; i >= 0; i--)
    {
        while (!st.empty() && st.top() >= arr[i])
        {
            st.pop();
        }
        if (!st.empty())
        {
            ans[i] = st.top();
        }
        else
        {
            ans[i] = -1;
        }
        st.push(arr[i]);
    }

    return ans;
}
vector<int> prevSmallerElement(vector<int> &arr)
{
    stack<int> st;
    int n = arr.size();
    vector<int> ans(n);
    ans[0] = -1;
    st.push(arr[0]);
    for (int i = 1; i < n; i++)
    {
        while (!st.empty() && st.top() >= arr[i])
        {
            st.pop();
        }
        if (!st.empty())
        {
            ans[i] = st.top();
        }
        else
        {
            ans[i] = -1;
        }
        st.push(arr[i]);
    }

    return ans;
}
vector<int> prevGreaterElement(vector<int> &arr)
{
    stack<int> st;
    int n = arr.size();
    vector<int> ans(n);
    ans[0] = -1;
    st.push(arr[0]);
    for (int i = 1; i < n; i++)
    {
        while (!st.empty() && st.top() <= arr[i])
        {
            st.pop();
        }
        if (!st.empty())
        {
            ans[i] = st.top();
        }
        else
        {
            ans[i] = -1;
        }
        st.push(arr[i]);
    }

    return ans;
}
int main()
{
    vector<int> arr = {1, 2, 1};
    vector<int> p = nextGreaterElementsII(arr);
    for (auto x : p)
        cout << x << " ";

    return 0;
}