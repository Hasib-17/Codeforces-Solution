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
    vector<int> v(m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    }

    for (int i = 0; i < m; i++)
    {
        int mx = 0;
        for (int j = 0; j < n; j++)
        {
            int x = a[j][i] - '0';
            mx = max(mx, x);
        }
        v[i] = mx;
    }
    // for (auto i : v)
    //     cout << i << " ";
    // cout << '\n';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int x = a[i][j] - '0';
            if (x == v[j])
            {
                cnt++;
                break;
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