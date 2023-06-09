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
// int a[50];
void solve()
{
    //*[START]*//
    int a, b, c, m, cnt = 0;
    cin >> a >> b >> c >> m;
    int mx = max(a, max(b, c));
    int mn = min(a, min(b, c));
    int mid = (a + b + c) - (mx + mn);
    int maxc = (mx + mn + mid) - 3;
    int minc = mx - mid - mn - 1;
    if (m >= minc && m <= maxc)
        cout << "YES\n";
    else
        cout << "NO\n";
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