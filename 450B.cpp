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
    ll n, x, y, mod = 1e9 + 7;
    cin >> x >> y >> n;
    ll trget = n % 6;
    vector<ll> v = {x, y, (y - x), (-1) * x, (-1) * y, (x - y)};
    ll res = v[trget - 1];
    if (trget == 0)
        res = v[5];
    res %= mod;
    if (res >= 0)
        cout << res << '\n';
    else
        cout << res + mod << '\n';
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
