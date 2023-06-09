/*Author: Hasib; Date:18/11/22*/
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
    //* @brief [START]*//
    ll x, y, ans = 0;
    cin >> x >> y;
    if (x >= y)
    {
        ll a = x * x - x + 1;
        if (x % 2)
        {
            ans = a - (x - y);
        }
        else
            ans = a + (x - y);
    }
    else
    {
        ll a = y * y - y + 1;
        if (y % 2)
        {
            ans = a + (y - x);
        }
        else
            ans = a - (y - x);
    }
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
