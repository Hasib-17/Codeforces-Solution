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
// vector<int> g(N);
void setio(string s)
{
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}
void fastio()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
void solve()
{
    //*[START]*//
    // i.e. 17-8 = 17%7 - 8%7 = 3-1
    // so if (y-x)%7 = 0 then we know it has to be divisible
    // y%7 = x%7
    // that means we are looking for the same modulo
    // we have to maximize the range of the same modulo to get the largest group
    ll n, sum = 0, res = 0;
    cin >> n;
    vector<ll> v(n), pref(n);
    map<ll, vector<ll>> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
        pref[i] = sum % 7;
        mp[pref[i]].push_back(i);
    }
    for (auto u : pref)
    {
        ll x = mp[u][mp[u].size() - 1] - mp[u][0];
        res = max(x, res);
    }
    cout << res << '\n';
}
int main()
{
    fastio();
    // setio("div7");
    ii_65;
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}