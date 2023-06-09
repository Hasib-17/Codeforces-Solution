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
    ll n, c = 0;
    cin >> n;
    bool ok = false;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] == -1)
            ok = true;
    }
    for (int i = 1; i < n; i++)
    {
        if (v[i] == -1 && v[i - 1] == -1)
        {
            c = 1;
            v[i] = 1;
            v[i - 1] = 1;
            break;
        }
    }
    if (c)
    {
        cout << accumulate(all(v), 0LL) << '\n';
    }
    else if (!c & ok)
    {
        cout << accumulate(all(v), 0LL) << '\n';
    }
    else
        cout << accumulate(all(v), 0LL) - 4 << '\n';
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