/*Author:-> Hasib; Date:26/01/23*/
#include <bits/stdc++.h>
#define ii_65                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long int
#define ul unsigned long long
#define dec greater<int>()
const ll N = 1e5;
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define all(x) (x).begin(), (x).end()
using namespace std;
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
vector<int> g(N);
void solve()
{
    //*[START]*//
    string s;
    cin >> s;
    s += s;
    ll n = s.size(), res = 0;
    ll cnt = 0;
    for (ll i = 0, cur = 0; i < n; i++)
    {
        if (s[i] == '1')
            ++cur;
        else
            cur = 0;
        cnt = max(cnt, cur);
    }
    n /= 2;
    if (cnt > n)
        cnt = n;
    if (cnt == n)
        cout << n * n << '\n';
    else
    {
        for (ll i = 1; i <= cnt; i++)
        {
            res = max(res, i * (cnt - i + 1));
        }
        cout << res << '\n';
    }
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