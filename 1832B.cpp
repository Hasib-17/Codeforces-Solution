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
using namespace std;
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
void solve()
{
    //*@[START]*//
    ll n, k, ans = 0;
    cin >> n >> k;
    vector<ll> v(n), pref(n + 1);
    for (ll i = 0; i < n; i++)
        cin >> v[i];
    sort(all(v));
    pref[0] = 0;
    for (int i = 0; i < n; i++)
        pref[i + 1] = pref[i] + v[i];
    for (int i = 0; i <= k; i++)
        ans = max(ans, pref[n - i] - pref[2 * (k - i)]);
    cout << ans << '\n';
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