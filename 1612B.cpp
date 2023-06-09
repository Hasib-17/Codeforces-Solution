/*Author: Hasib; Date:26/01/23*/
#include <bits/stdc++.h>
#define ii_65                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long int
#define ul unsigned long long
#define dec greater<int>()
const ll N = 1e9 + 1;
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define all(x) (x).begin(), (x).end()
using namespace std;
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
// vector<int> g(N);
void solve()
{
    //*[START]*//
    ll n, a, b;
    cin >> n >> a >> b;
    set<int> l, r;
    r.insert(b);
    for (int i = 1; i <= n; i++)
    {
        if (i > b)
            break;
        if (i == a)
            continue;
        else
            r.insert(i);
        if (r.size() == n / 2)
            break;
    }
    // cout << r.size() << '\n';
    // for (auto i : r)
    //     cout << i << ' ';
    // cout << '\n';
    for (int i = n; i > 0; i--)
    {
        if (i < a)
            break;
        if (i == b)
            continue;
        else
        {
            if (r.find(i) == r.end())
                l.insert(i);
            else
                continue;
        }
    }
    // cout << l.size() << '\n';
    if (l.size() != r.size() or l.size() + r.size() != n)
    {
        cout << -1 << '\n';
        return;
    }
    for (auto i : l)
        cout << i << ' ';
    for (auto i : r)
        cout << i << ' ';
    cout << '\n';
}
int main()
{
    // freopen("cowqueue.in", "r", stdin);
    // freopen("cowqueue.out", "w", stdout);
    ii_65;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}