/*#include <bits/stdc++.h>
using namespace std;

bool solve(string str)
{
    /* int n = str.length();
     int digit_count = 0, char_count = 0;

     for (char c : str)
     {
         if (isdigit(c))
         {
             digit_count++;
         }
         else if (isalpha(c))
         {
             char_count++;
         }
     }

     // Condition -1: All digits or all characters
     if (digit_count == n || char_count == n)
     {
         return true;
     }

     // Check digits are in non-decreasing order
     for (int i = 0; i < n - 1; ++i)
     {
         if (isdigit(str[i]) && isdigit(str[i + 1]))
         {
             if (str[i] > str[i + 1])
             {
                 return false;
             }
         }
     }

     // Check characters are in non-decreasing order
     for (int i = 0; i < n - 1; ++i)
     {
         if (isalpha(str[i]) && isalpha(str[i + 1]))
         {
             if (str[i] > str[i + 1])
             {
                 return false;
             }
         }
     }

     // Condition -2: No adjacent character-digit pairs
     for (int i = 0; i < n - 1; ++i)
     {
         if (isalpha(str[i]) && isdigit(str[i + 1]))
         {
             return false;
         }
     }

     return true;
    if (is_sorted(str.begin(), str.end()))
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str;
        for (int i = 0; i < n; i++)
        {

            cin >> str[i];
        }

        if (is_sorted(str.begin(), str.end()))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
} */

/* Idea is that all digits in ascii tables comes before the characters ASCII Values*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        // Check if the string is sorted
        if (is_sorted(s.begin(), s.end()))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
