/*Author: Hasib; Date:26/01/23*/
#include <bits/stdc++.h>
#define ii_65                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long int
#define ul unsigned long long
#define dec greater<int>()
const ll N = 1e6 + 1;
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define all(x) (x).begin(), (x).end()
using namespace std;
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
void solve()
{
    //*[START]*//
    ll n, q;
    cin >> n >> q;
    vector<vector<ll>> v(n + 1, vector<ll>(3, 0));
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        v[i][0] = v[i - 1][0] + (a == 1);
        v[i][1] = v[i - 1][1] + (a == 2);
        v[i][2] = v[i - 1][2] + (a == 3);
    }
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //         cout << v[i][j] << " ";
    //     cout << '\n';
    // }
    while (q--)
    {
        int l, r, res = 0;
        cin >> l >> r;
        cout << v[r][0] - v[l - 1][0] << " ";
        cout << v[r][1] - v[l - 1][1] << " ";
        cout << v[r][2] - v[l - 1][2];
        cout << '\n';
    }
}
int main()
{
    freopen("bcount.in", "r", stdin);
    freopen("bcount.out", "w", stdout);
    ii_65;
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}