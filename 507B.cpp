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
using namespace std;
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
void solve()
{
    //*@[START]*//
    ll r, x, y, x1, y1;
    cin >> r >> x >> y >> x1 >> y1;
    ll d1 = abs(x1 - x);
    ll d2 = abs(y1 - y);
    ll dis = ceil(sqrtl((d1 * d1) + (d2 * d2)));
    r *= 2LL;
    ll res = (dis + r - 1) / r;
    cout << res << '\n';
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