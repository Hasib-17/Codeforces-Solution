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
void solve()
{
    //*@[START]*//

    ll n, s = 0, sum = 0;
    cin >> n;
    vector<ll> v(n);
    map<ll, ll> m;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        m[v[i] % 200]++;
    }
    for (auto i : m)
    {
        s += (i.second * (i.second - 1) / 2);
    }
    // sum = n * (n - 1) / 2;
    cout << s << '\n';
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