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
    ll l, r, res = 0;
    cin >> l >> r;
    vector<ll> v;
    v.push_back(4);
    v.push_back(7);
    for (ll i = 0; i <= N; i++)
    {
        v.push_back(v[i] * 10 + 4);
        v.push_back(v[i] * 10 + 7);
        if (v[i] * 10 >= 1000000000LL)
            break;
    }
    ll ans = 0;
    auto it = lower_bound(all(v), r) - v.begin();
    auto it1 = lower_bound(all(v), l) - v.begin();
    if (v[it] == v[it1])
    {
        ans = v[it] * (r - l + 1);
        cout << ans << '\n';
        return;
    }
    while (it)
    {
        ll a = v[it];
        if (a > l)
            it--;
        ans += (a * (r - v[it]));
        r = v[it];
        auto it = lower_bound(all(v), r) - v.begin();
        if (it > 0 && l > v[it - 1])
        {
            ans += (v[it] * (v[it] - l + 1));
            break;
        }
        else if (it == 0)
        {
            ans += 4 * (4 - l + 1);
            break;
        }
    }
    cout << ans << '\n';
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