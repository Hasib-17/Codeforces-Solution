/*Author: Hasib; Date:26/01/23*/
#include <bits/stdc++.h>
#define ii_65                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long int
#define ul unsigned long long
#define dec greater<int>()
const ll N = 1e7 + 1;
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define all(x) (x).begin(), (x).end()
using namespace std;
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
// vector<int> g(N);
void solve()
{
    //*[START]*//
    ll y, k, n;
    cin >> y >> k >> n;
    vector<ll> v;
    if (y >= n)
    {
        cout << -1 << '\n';
        return;
    }
    ll i = 1;
    while (k * i <= n)
    {
        // cout << "H\n";
        if (i * k > y)
            v.push_back(k * i - y);
        i++;
    }
    if (v.size() == 0)
        cout << -1 << '\n';
    else
    {
        sort(all(v));
        for (auto i : v)
            cout << i << ' ';
        cout << '\n';
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