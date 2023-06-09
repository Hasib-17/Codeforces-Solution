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
    //*[START]*//
    ll n, q, k;
    cin >> n >> q >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    while (q--)
    {
        ll l, r, res = 0;
        cin >> l >> r;
        l--;
        r--;
        res += v[l] - 1;
        res += k - v[r];
        res += (2 * ((v[r] - v[l] + 1) - (r - l + 1)));
        cout << res << '\n';
    }
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