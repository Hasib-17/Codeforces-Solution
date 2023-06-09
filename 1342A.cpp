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
vector<int> g(N);
void solve()
{
    //*@[START]*//
    ll x, y, a, b;
    ll cnt = 0;
    cin >> x >> y;
    cin >> a >> b;
    if (2 * a >= b && (x > 0 && y > 0))
    {
        ll m = min(x, y);
        cnt += (b * m);
        x -= m;
        y -= m;
    }
    else if (2 * a < b && (x && y))
    {
        ll m = min(x, y);
        cnt += (a * m);
        if (x < y)
            x -= m;
        else
            y -= m;
    }
    if (x > y)
        cnt += (a * x);
    else
        cnt += (a * y);
    cout << cnt << '\n';
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