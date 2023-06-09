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
int f(int xx)
{
    int i = 0, r = 0;
    while (xx)
    {
        r += (xx % 2);
        xx = xx / 2;
        i++;
    }
    return r;
}
void solve()
{
    //*[START]*//
    int n, m, k, ans = 0;
    cin >> n >> m >> k;
    vector<int> v(m + 1);
    for (int i = 0; i <= m; i++)
        cin >> v[i];
    for (int i = 0; i < m; i++)
    {
        int x = f(v[i] ^ v[m]);
        if (x <= k)
            ans++;
    }
    cout << ans << '\n';
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
