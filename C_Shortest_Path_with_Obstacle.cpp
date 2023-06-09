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
using namespace std;
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
void solve()
{
    //*@[START]*//
    int x1, x2, y1, y2, z1, z2;
    cin >> x1 >> x2;
    cin >> y1 >> y2;
    cin >> z1 >> z2;
    int ans = abs(x1 - y1) + abs(x2 - y2);
    // cout << ans << "h\n";
    if ((x1 == z1 && z1 == y1 && min(x2, y2) < z2 && z2 < max(x2, y2)) || (x2 == z2 && z2 == y2 && min(x1, y1) < z1 && z1 < max(x1, y1)))
        ans += 2;
    cout << ans << '\n';
}
int main()
{
    ii_65;
    ll t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}