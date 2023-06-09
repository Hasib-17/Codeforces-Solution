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
    ll n, q, sum = 0;
    cin >> n >> q;
    vector<int> v(n), pref(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 1; i <= n; i++)
    {
        pref[i] = pref[i - 1] + v[i - 1];
    }
    // for (auto i : pref)
    //     cout << i << " ";
    ll tt = pref[n];
    // cout << pref[n] << '\n';
    while (q--)
    {
        ll l, r, k, temp = 0, res = 0;
        cin >> l >> r >> k;
        temp = tt - pref[r];
        temp += pref[l - 1];
        ll w = (r - l + 1) * k;
        temp += w;
        // cout << temp << '\n';
        if (temp % 2)
            cout << "YES\n";
        else
            cout << "NO\n";
        tt = pref[n];
    }
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