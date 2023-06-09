/*Author: Hasib; Date:11/12/22*/
#include <bits/stdc++.h>
#define ii_65                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long int
#define ul unsigned long long
#define dec greater<string>()
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define all(x) (x).begin(), (x).end()
using namespace std;
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
void solve()
{
    //*[START]*//
    int n, mod = 1e9 + 7;
    cin >> n;
    vector<int> a(n), b(n), res;
    for (auto &i : a)
        cin >> i;
    for (auto &i : b)
        cin >> i;
    sort(all(a));
    sort(all(b));
    for (int i = 0; i < n; i++)
    {
        int it = upper_bound(all(a), b[i]) - a.begin();
        res.push_back(n - it);
    }
    ll ans = res[n - 1], j = 1;
    // for (auto i : res)
    //     cout << n - i << ' ';
    // cout << '\n';
    // cout << ans << '\n';
    for (int i = n - 2; i >= 0; i--)
    {
        ll x = res[i] - j;
        ans = (ans * x) % mod;
        j++;
    }
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