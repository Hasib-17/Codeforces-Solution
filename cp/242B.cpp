/*Author: Hasib; Date:26/01/23*/
#include <bits/stdc++.h>
#define ii_65                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long int
#define ul unsigned long long
#define dec greater<int>()
const ll N = 1e7 + 1;
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define all(x) (x).begin(), (x).end()
using namespace std;
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
// vector<int> g(N);
void solve()
{
    //*[START]*//

    ll n, mn = INT_MAX, mx = INT_MIN, indx = 0;
    cin >> n;
    vector<pair<ll, ll>> vp(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> vp[i].first >> vp[i].second;
        mn = min(mn, vp[i].first);
        mx = max(mx, vp[i].second);
    }
    bool ok = false;
    for (ll i = 0; i < n; i++)
    {
        if (vp[i].first == mn && vp[i].second == mx)
        {
            ok = true;
            indx = i;
            break;
        }
    }
    if (ok)
        cout << indx + 1 << '\n';
    else
        cout << -1 << '\n';
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