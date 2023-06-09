/*Author: Hasib; Date:26/01/23*/
#include <bits/stdc++.h>
#define ii_65                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long int
#define ul unsigned long long
#define dec greater<int>()
const ll N = 1e7 + 1;
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define all(x) (x).begin(), (x).end()
using namespace std;
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
// vector<int> g(N);
void solve()
{
    //*[START]*//
    ll n, q;
    cin >> n >> q;
    vector<ll> v(n), pref(n + 1);
    for (auto &i : v)
        cin >> i;
    pref[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        pref[i] = pref[i - 1] + v[i - 1];
    }
    // for (auto i : pref)
    //     cout << i << " ";
    // cout << '\n';
    while (q--)
    {
        int l, r, k;
        cin >> l >> r >> k;
        ll x = pref[r] - pref[l - 1];
        x = pref[n] - x;
        ll dif = r - l + 1;
        ll res = (dif * k) + x;
        // cout << res << '\n';
        if (res % 2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ii_65;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}