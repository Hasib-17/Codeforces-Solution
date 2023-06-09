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
    ll n, x;
    cin >> n >> x;
    vector<ll> v(n);
    map<ll, ll> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }
    sort(all(v), dec);
    for (int i = 0; i < n; i++)
    {
        ll a = v[i], b;
        if (mp[a] && a % x == 0)
            b = a / x;
        else
            continue;
        if (mp[b] > 0)
        {
            mp[a]--;
            mp[b]--;
            if (mp[b] == 0)
                mp.erase(b);
        }
    }
    ll cnt = 0;
    for (auto i : mp)
    {
        if (i.second > 0)
            cnt += i.second;
        // cout << i.first << " " << i.second << '\n';
    }
    cout << cnt << '\n';
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