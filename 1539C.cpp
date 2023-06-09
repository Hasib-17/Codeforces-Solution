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
    ll n, k, x, cnt = 0, c = 0;
    cin >> n >> k >> x;
    vector<ll> v(n), res;
    for (auto &i : v)
        cin >> i;
    sort(all(v));
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i + 1] - v[i] > x)
        {
            res.push_back((v[i + 1] - v[i] - 1) / x);
        }
    }
    sort(all(res));
    // for (auto i : v)
    //     cout << i << ' ';
    // cout << '\n';
    for (int i = 0; i < res.size(); i++)
    {
        if (k >= res[i])
        {
            cnt += res[i];
            k -= res[i];
            res[i] = 0;
        }
    }
    for (auto i : res)
    {
        // cout << i << ' ';
        if (i != 0)
            c++;
    }
    cout << c + 1 << '\n';
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
