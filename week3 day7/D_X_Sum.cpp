 #include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];

    // Input the array
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> a[i][j];

    int mx = 0;

    // Check each position in the array
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
        {
            int now = 0;
            // Directions: top-left, top-right, bottom-left, bottom-right
            for (int di = -1; di <= 1; di += 2)
                for (int dj = -1; dj <= 1; dj += 2)
                {
                    int ci = i, cj = j;
                    // Traverse the diagonals
                    while (ci >= 0 && ci < n && cj >= 0 && cj < m)
                    {
                        now += a[ci][cj];
                        ci += di;
                        cj += dj;
                    }
                }

            // Subtract the center cell value three times (as it was added four times)
            now -= a[i][j] * 3;
            mx = max(mx, now);
        }

    cout << mx << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
