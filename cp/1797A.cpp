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
void solve()
{
    //*[START]*//
    ll a, b, trget = 4, start = 4;
    cin >> a >> b;
    ll x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if (y2 == b)
        trget--;
    if (x2 == a)
        trget--;
    if (y2 == 1)
        trget--;
    if (x2 == 1)
        trget--;
    if (x1 == 1)
        start--;
    if (y1 == 1)
        start--;
    if (x1 == a)
        start--;
    if (y1 == b)
        start--;
    ll ans = min(start, trget);
    cout << ans << '\n';
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ii_65;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}