/*Author: Hasib; Date:11/12/22*/
#include <bits/stdc++.h>
#define ii_65                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long int
#define ul unsigned long long
#define dec greater<int>()
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define all(x) (x).begin(), (x).end()
#define out(x) cout << #x << " -> " << x << "\n"
using namespace std;
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }

void solve()
{
    //*[START]*//
    int n, q;
    cin >> n >> q;
    char a[n][n];
    int b[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == '.')
                b[i][j] = 0;
            else
                b[i][j] = 1;
        }
    }
    for (int i = 1; i < n; i++)
        b[0][i] = b[0][i] + b[0][i - 1];
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == 0)
                b[i][j] = b[i][j] + b[i - 1][j];
            else
            {
                b[i][j] += (b[i - 1][j] + b[i][j - 1]) - b[i - 1][j - 1];
            }
        }
    }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //         cout << b[i][j] << ' ';
    //     cout << '\n';
    // }
    while (q--)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        x1--;
        y1--;
        x2--;
        y2--;
        ll res = b[x2][y2];
        if (x1 - 1 >= 0)
            res -= b[x1 - 1][y2];
        if (y1 - 1 >= 0)
            res -= b[x2][y1 - 1];
        if (x1 - 1 >= 0 && y1 - 1 >= 0)
            res += b[x1 - 1][y1 - 1];
        cout << res << '\n';
    }
}
int main()
{
    ii_65;
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
