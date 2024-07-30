#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>

using namespace std;

// Directions for adjacent cells
const vector<pair<int, int>> directions = {
    {0, 1}, {0, -1}, {1, 0}, {-1, 0}, {1, 1}, {1, -1}, {-1, 1}, {-1, -1}};

bool isValid(int r, int c)
{
    return r >= 0 && r < 3 && c >= 0 && c < 3;
}

int main()
{
    vector<string> grid(3);
    for (int i = 0; i < 3; ++i)
    {
        cin >> grid[i];
    }

    set<string> words;

    for (int r1 = 0; r1 < 3; ++r1)
    {
        for (int c1 = 0; c1 < 3; ++c1)
        {
            for (const auto &dir1 : directions)
            {
                int r2 = r1 + dir1.first;
                int c2 = c1 + dir1.second;
                if (!isValid(r2, c2))
                    continue;
                for (const auto &dir2 : directions)
                {
                    int r3 = r2 + dir2.first;
                    int c3 = c2 + dir2.second;
                    if (!isValid(r3, c3))
                        continue;
                    if ((r3 == r1 && c3 == c1) || (r2 == r1 && c2 == c1))
                        continue; // Ensure all cells are different
                    string word = {grid[r1][c1], grid[r2][c2], grid[r3][c3]};
                    words.insert(word);
                }
            }
        }
    }

    cout << *words.begin() << endl; 
    return 0;
}
