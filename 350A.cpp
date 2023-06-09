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
    ll n, m, mn1 = INT_MAX, mx1 = 0, mn2 = INT_MAX;
    cin >> n >> m;
    vector<ll> v1(n), v2(m);
    for (auto &i : v1)
    {
        cin >> i;
        mn1 = min(i, mn1);
        mx1 = max(mx1, i);
    }
    for (auto &i : v2)
    {
        cin >> i;
        mn2 = min(mn2, i);
    }
    if (max(2 * mn1, mx1) < mn2)
        cout << max(2 * mn1, mx1) << '\n';
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