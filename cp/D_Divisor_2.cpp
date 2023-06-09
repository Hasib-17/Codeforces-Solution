/*Author: Hasib; Date:09/01/23*/
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
// int a[50];
void solve()
{
    //*@[START]*//
    ll n, res = 1, mx = 0;
    cin >> n;
    vector<int> v(n);
    vector<int> mp(1e6 + 1);
    for (auto &i : v)
    {
        cin >> i;
        mp[i]++;
        mx = max(mx, (ll)i);
    }
    // cout << mp[15] << '\n';
    for (ll i = 2; i <= mx; i++)
    {
        int cnt = 0;
        for (ll j = i; j <= mx; j += i)
            cnt += mp[j];
        if (cnt > 1)
            res = max(res, i);
    }
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