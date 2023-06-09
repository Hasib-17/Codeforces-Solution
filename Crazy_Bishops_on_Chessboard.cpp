/*Author: Hasib; Date:26/01/23*/
#include <bits/stdc++.h>
#define ii_65                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long int
#define ul unsigned long long
#define dec greater<int>()
const ll N = 1e9 + 1;
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define all(x) (x).begin(), (x).end()
using namespace std;
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
// vector<int> g(N);
void solve()
{
    //*[START]*//
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i % 2 == 0)
            {
                if (j % 2 == 0)
                    a[i][j] = 1;
                else
                    a[i][j] = 0;
            }
            else
            {
                if (j % 2)
                    a[i][j] = 1;
                else
                    a[i][j] = 0;
            }
        }
    }
    int cnt = 0;
    ll res = n - 1;
    for (int i = 1; i < 2; i++)
    {
        for (int j = 3; j < n - 1; j++)
            cnt += a[i][j];
    }
    int x = cnt;
    cnt *= 2;
    // cout << cnt << '\n';
    res += cnt;
    res -= x;
    if (n == 2)
        res = 0;
    cout << res << '\n';
}
int main()
{
    // freopen("cowqueue.in", "r", stdin);
    // freopen("cowqueue.out", "w", stdout);
    ii_65;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}