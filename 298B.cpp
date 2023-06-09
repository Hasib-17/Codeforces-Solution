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
    ll t, x, y, a, b, res = 0;
    cin >> t >> x >> y >> a >> b;
    string s;
    cin >> s;
    for (int i = 0; i < t; i++)
    {
        if (x > a && s[i] == 'W')
            x--;
        else if (a > x && s[i] == 'E')
            a--;
        else if (y > b && s[i] == 'S')
            y--;
        else if (b > y && s[i] == 'N')
            b--;
        if (x == a && y == b)
        {
            res = i + 1;
            break;
        }
    }
    if (res > 0)
        cout << res << '\n';
    else
        cout << -1 << '\n';
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ii_65;
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}