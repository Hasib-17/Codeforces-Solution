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
    ll n, k, ans = 1e18;
    cin >> n >> k;
    if (n == k)
        cout << n << '\n';
    else if (n * n < k)
        cout << -1 << '\n';
    else
    {
        // cout << k << '\n';
        for (int i = 1e7; i; i--)
        {
            if (i > n)
                continue;
            ll x = k / i + (k % i);
            if (x <= n && x * i >= k)
                ans = min(x * i, ans);
            // cout << ans << '\n';
            // cout << x << '\n';
            if (x > n)
                break;
        }
        if (ans == 1e18)
            cout << -1 << '\n';
        else
            cout << ans << '\n';
    }
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ii_65;
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}