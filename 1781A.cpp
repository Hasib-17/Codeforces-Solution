/*Author:-> Hasib; Date:26/01/23*/
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
vector<int> g(N);
void solve()
{
    //*[START]*//
    ll w, d, h, ans = INT_MAX, tr = 0;
    cin >> w >> d >> h;
    ll a, b, f, g;
    cin >> a >> b >> f >> g;
    ll x = b + h + g + abs(a - f);
    ans = min(ans, x);
    x = (d - b) + h + (d - g) + abs(f - a);
    ans = min(ans, x);
    x = a + h + f + abs(g - b);
    ans = min(ans, x);
    x = (w - a) + h + (w - f) + abs(g - b);
    ans = min(ans, x);
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