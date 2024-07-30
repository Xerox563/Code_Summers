// #include <bits/stdc++.h>
// using namespace std;

// bool isValid(string str1, string str2)
// {
//     int cnt = 0;
//     for (int i = 0; i < 2; i++)
//     {
//         if (str1[i] != str2[i])
//         {
//             cnt++;
//         }
//     }
//     return (cnt == 1);
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(0);

//     int tc;
//     cin >> tc;
//     while (tc--)
//     {
//         long long n;
//         cin >> n;
//         vector<string> arr(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }

//         long long ans = 0;
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = i + 1; j < n; j++)
//             {
//                 if (isValid(arr[i], arr[j]))
//                 {
//                     ans++;
//                 }
//             }
//         }
//         cout << ans << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int tc;
    cin >> tc;
    while (tc--)
    {
        long long n;
        cin >> n;
        vector<string> arr(n);
        unordered_map<string, long long> freq;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            freq[arr[i]]++;
        }

        long long ans = 0;
        for (const auto &[str, count] : freq)
        {
            for (int i = 0; i < 2; i++)
            {
                string temp = str;
                for (char c = 'a'; c <= 'k'; c++)
                {
                    if (temp[i] != c)
                    {
                        temp[i] = c;
                        if (freq.find(temp) != freq.end())
                        {
                            ans += count * freq[temp];
                        }
                    }
                }
            }
        }

               ans /= 2;
        cout << ans << endl;
    }

    return 0;
}
