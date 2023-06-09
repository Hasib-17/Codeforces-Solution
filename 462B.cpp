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
// const ll N = 1e9;
string toBinary(int n) // always save in my codes:
{
    string r;
    while (n != 0)
    {
        r += (n % 2 == 0 ? "0" : "1");
        n /= 2;
    }
    return r;
}
void solve()
{
    ll n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    map<char, ll> mp;
    for (auto ii : s)
        mp[ii]++;
    ul res = 0;
    vector<ll> v;
    for (auto ii : mp)
        v.push_back(ii.second);
    sort(all(v), dec);
    for (auto ii : v)
    {
        if (ii >= m)
        {
            res += m * m;
            m -= m;
            break;
        }
        else
        {
            res += ii * ii;
            m -= ii;
        }
    }
    if (m > 0)
        res += (m * m);
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
