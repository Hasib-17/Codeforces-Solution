/*Author: Hasib; Date:26/01/23*/
#include <bits/stdc++.h>
#define ii_65                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long int
#define ul unsigned long long
#define dec greater<int>()
const ll N = 1e5;
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define all(x) (x).begin(), (x).end()
using namespace std;
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
// vector<int> g(N);
void solve()
{
    //*@[START]*//
    ll n;
    cin >> n;
    vector<ll> v(n);
    map<ll, ll> mp1, mp2;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        mp1[v[i]] = i + 1;
        mp2[v[i]] = n - i;
    }
    ll m, vasya = 0, sasya = 0;
    cin >> m;
    for (ll i = 1; i <= m; i++)
    {
        ll x;
        cin >> x;
        vasya += mp1[x];
        sasya += mp2[x];
    }
    cout << vasya << " " << sasya << '\n';
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