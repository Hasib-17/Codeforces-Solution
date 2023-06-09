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
    ll n, q;
    cin >> n >> q;
    map<string, ll> mp;
    for (int i = 0; i < n; i++)
    {
        string s;
        ll x;
        cin >> s >> x;
        mp[s] = x;
    }
    while (q--)
    {
        ll cnt = 0;
        string t;
        while (cin >> t)
        {
            if (t == ".")
                break;
            cnt += mp[t];
            // if (mp[t])
            //     cout << t << '\n';
        }
        cout << cnt << '\n';
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