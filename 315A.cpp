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
// const ll N = 1e9;
string toBinary(int n) // always save in my codes:
{
    string r;
    while (n != 0)
    {
        r += (n % 2 == 0 ? "0" : "1");
        n /= 2;
    }
    return r;
}
void solve()
{
    ll n, ans = 0;
    cin >> n;
    vector<pair<ll, ll>> v;
    map<ll, ll> vp;
    map<ll, ll> mp;
    for (int i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        v.push_back({a, b});
        vp[a]++;
        mp[b]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i].first == v[i].second)
        {
            if (mp[v[i].first] == 1 && vp[v[i].first] >= 1)
                ans++;
        }
        else if (mp.count(v[i].first) == 0)
            ans++;
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
