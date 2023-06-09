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
    ll a, b, x, y, n, res = 1e18;
    cin >> a >> b >> x >> y >> n;
    ll d1 = a - x;
    ll d2 = b - y;
    if (d1 + d2 < n)
        res = (x * y);
    else
    {
        if (a - n >= x)
            res = (a - n) * b;
        if (b - n >= y)
            res = min(res, (b - n) * a);
        if (d1 <= n)
        {
            ll df = n - d1;
            ll r = x * (b - df);
            res = min(r, res);
        }
        if (d2 <= n)
        {
            ll df = n - d2;
            ll r = y * (a - df);
            res = min(r, res);
        }
    }
    cout << res << '\n';
}
int main()
{
    ii_65;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
