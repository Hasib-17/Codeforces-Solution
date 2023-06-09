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
#define out(x) cout << #x << " -> " << x << "\n"
using namespace std;
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
void solve()
{
    //*[START]*//
    ll n;
    cin >> n;
    ll sum = 0, trget = 0;
    vector<ll> v1, v2;
    for (ll i = 1; i <= n; i++)
        trget += i;
    if (trget % 2)
    {
        cout << "NO\n";
        return;
    }
    trget /= 2;
    map<ll, ll> mp;
    for (ll i = n; i > 0; i--)
    {
        if (sum + i <= trget)
        {
            sum += i;
            v1.push_back(i);
            mp[i]++;
            if (sum == trget)
                break;
        }
    }
    ll sum2 = 0;
    for (ll i = 1; i <= n; i++)
    {
        if (mp[i] == 0 && sum2 + i <= trget)
        {
            sum2 += i;
            v2.push_back(i);
            if (sum2 == trget)
                break;
        }
    }
    ll res1 = accumulate(all(v1), 0LL);
    ll res2 = accumulate(all(v2), 0LL);
    if (res1 == res2)
    {
        cout << "YES ";
        cout << v1.size() << ' ';
        for (auto ii : v1)
            cout << ii << ' ';
        cout << v2.size() << ' ';
        for (auto ii : v2)
            cout << ii << ' ';
        cout << '\n';
    }
    else
        cout << "NO\n";
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
