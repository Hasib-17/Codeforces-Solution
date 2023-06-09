/*Author: Hasib; Date:26/01/23*/
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
// vector<int> g(N);
void solve()
{
    //*[START]*//
    ll x, y, a, b;
    cin >> x >> y >> a >> b;
    vector<pair<int, int>> p;
    while (1)
    {
        for (int i = x; (i > b && i >= a); i--)
            p.push_back({i, b});
        b++;
        if (b > y)
            break;
    }
    cout << p.size() << '\n';
    sort(all(p));
    for (auto i : p)
        cout << i.first << " " << i.second << '\n';
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