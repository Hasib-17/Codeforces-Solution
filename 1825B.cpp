/*Author: Hasib; Date:18/11/22*/
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
using namespace std;
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
void solve()
{
    //* @brief [START]*//
    ll n, m, mx = 0, mn = INT_MAX, mx1 = 0, mn1 = INT_MAX;
    cin >> n >> m;
    vector<ll> v(n * m);
    ll sz = n * m;
    for (int i = 0; i < n * m; i++)
    {
        cin >> v[i];
    }
    sort(all(v));
    mx = v[v.size() - 1];
    mx1 = v[v.size() - 2];
    mn = v[0];
    mn1 = v[1];
    ll x = min(n, m);
    ll res = (x - 1) * (mx - mn1);
    res += ((sz - x) * (mx - mn));
    ll ans = (x - 1) * (mx1 - mn);
    ans += ((sz - x) * (mx - mn));
    cout << max(ans, res) << '\n';
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
