/*Author: Hasib; Date:11/12/22*/
#include <bits/stdc++.h>
#define ii_65                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long int
#define ul unsigned long long
#define dec greater<string>()
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define all(x) (x).begin(), (x).end()
#define out(x) cout << #x << " -> " << x << "\n"
using namespace std;
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
void solve()
{
    //*[START]*//
    ll n, k;
    cin >> n;
    vector<ll> v(n);
    for (auto &i : v)
        cin >> i;
    sort(all(v));
    cin >> k;
    while (k--)
    {
        int x, y;
        cin >> x >> y;
        int indx_x = lower_bound(all(v), x) - v.begin();
        int indx_y = upper_bound(all(v), y) - v.begin();
        cout << indx_y - indx_x << '\n';
        // int lw = -1, hi = n, mid;
        // while (hi - lw > 1)
        // {
        //     mid = (hi + lw) / 2;
        //     if (v[mid] < x)
        //         lw = mid;
        //     else
        //         hi = mid;
        // }
        // int indx1 = hi;
        // // out(indx1);
        // int low = -1, high = n;
        // while (high - low > 1)
        // {
        //     mid = (high + low) / 2;
        //     if (v[mid] <= y)
        //         low = mid;
        //     else
        //         high = mid;
        // }
        // int indx2 = low;
        // // out(indx2);
        // cout << indx2 - indx1 + 1 << '\n';
    }
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