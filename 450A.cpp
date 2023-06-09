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
    int n, m, zr = 0, ans = 0;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        v[i] -= m;
        if (v[i] <= 0)
        {
            v[i] = 0;
            zr++;
        }
    }
    if (zr == n)
    {
        cout << n << '\n';
        return;
    }
    int k = 1;
    while (k)
    {
        zr = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i])
            {
                v[i] -= m;
                ans = i + 1;
            }
            if (v[i] <= 0)
            {
                v[i] = 0;
                zr++;
            }
        }
        if (zr == n)
            break;
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