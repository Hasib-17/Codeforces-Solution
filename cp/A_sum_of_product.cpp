/*Author: Hasib; Date:09/01/23*/
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
// int a[50];
const ll mod = 1e9 + 7;
void solve()
{
    //*@[START]*//
    ll n, res = 0;
    cin >> n;
    vector<ll> v(n), pref(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    pref[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        pref[i] = v[i] + pref[i - 1];
    }
    // for (auto i : pref)
    //     cout << i << " ";
    // cout << '\n';
    ll r = pref[n - 1];
    for (int i = 0; i < n; i++)
    {
        ll h = (r - pref[i]) % mod * v[i] % mod;
        res += h;
    }
    cout << (res % mod) << '\n';
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