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
    cin >> n >> k;
    ll v[n];
    vector<ll> a(n), b(n), temp;
    for (auto &i : a)
        cin >> i;
    for (auto &i : b)
        cin >> i;
    // vector<pair<ll, ll>> vp;
    temp = a;
    sort(all(a));
    sort(all(b));
    map<ll, vector<ll>> mp;
    for (int i = 0; i < n; i++)
    {
        mp[a[i]].push_back(b[i]);
    }
    for (auto i : temp)
    {
        for (int j = 0; j < mp[i].size(); j++)
        {
            cout << mp[i][j] << ' ';
            mp[i][j] = mp[i][j + 1];
            break;
        }
    }
    cout << '\n';
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
