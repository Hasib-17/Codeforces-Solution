/*Author: Hasib; Date:26/01/23*/
#include <bits/stdc++.h>
#define ii_65                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long int
#define ul unsigned long long
#define dec greater<int>()
const ll N = 1e5 + 1;
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define all(x) (x).begin(), (x).end()
using namespace std;
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
// vector<int> g(N);
void solve()
{
    //*[START]*//
    int n, m, cnt = 0;
    cin >> n >> m;
    char a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m - 1; j++)
        {
            if ((a[i][j] == 'P' && a[i][j + 1] == 'W') || (a[i][j] == 'W' && a[i][j + 1] == 'P'))
            {

                cnt++;
                if (a[i][j] == 'P' && a[i][j + 1] == 'W')
                {
                    a[i][j] = '.';
                    a[i][j + 1] = '.';
                }
                else
                {
                    a[i][j] = '.';
                    a[i][j + 1] = '.';
                }
            }
            // cout << a[i][j];
        }
        // cout << '\n';
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if ((a[j][i] == 'P' && a[j + 1][i] == 'W') || (a[j][i] == 'W' && a[j + 1][i] == 'P'))
            {
                cnt++;
                if ((a[j][i] == 'P' && a[j + 1][i] == 'W'))
                {
                    a[j][i] = '.';
                    a[j + 1][i] = '.';
                }
                else
                {
                    a[j][i] = '.';
                    a[j + 1][i] = '.';
                }
            }
        }
    }
    cout << cnt << '\n';
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