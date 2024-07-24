#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

long long find_min_difference(long long D)
{
    long long min_difference = LLONG_MAX;

    for (long long x = 0; x * x <= D; ++x)
    {
        long long x2 = x * x;
        long long remaining = D - x2;

        if (remaining >= 0)
        {
            long long y = static_cast<long long>(sqrt(remaining));
            long long y2 = y * y;

            long long diff = abs(x2 + y2 - D);
            if (diff < min_difference)
            {
                min_difference = diff;
            }

            long long y2_next = (y + 1) * (y + 1);
            long long diff_next = abs(x2 + y2_next - D);
            if (diff_next < min_difference)
            {
                min_difference = diff_next;
            }
        }
    }

    return min_difference;
}

int main()
{
    long long D;
    cin >> D;

    cout << find_min_difference(D) << endl;

    return 0;
}
