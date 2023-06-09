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
    //*@[START]*//
    int n, m, mn = INT_MAX;
    cin >> n >> m;
    vector<int> v(m);
    for (auto &i : v)
        cin >> i;
    // for (auto i : v)
    //     cout << i << " ";
    sort(all(v), dec);
    for (int i = 0; i <= m - n; i++)
    {
        int x = v[i];
        int y = v[i + n - 1];
        mn = min(mn, (x - y));
    }
    cout << mn << "\n";
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