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
    ll n, cnt = 0;
    cin >> n;
    vector<ll> v(n);
    for (auto &i : v)
        cin >> i;
    if (v[n - 2] > v[n - 1])
    {
        cout << -1 << '\n';
        return;
    }
    if (is_sorted(all(v)))
    {
        cout << 0 << '\n';
        return;
    }
    if (v[n - 1] < 0)
    {
        if (is_sorted(all(v)))
        {
            cout << 0 << '\n';
            return;
        }
        cout << -1 << '\n';
        return;
    }
    cout << n - 2 << '\n';
    for (int i = 1; i <= n - 2; i++)
        cout << i << " " << n - 1 << " " << n << '\n';
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