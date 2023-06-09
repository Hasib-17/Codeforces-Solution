/*Author: Hasib; Date:26/01/23*/
#include <bits/stdc++.h>
#define ii_65                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long int
#define ul unsigned long long
#define dec greater<int>()
const ll N = 1e5 + 1;
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define all(x) (x).begin(), (x).end()
using namespace std;
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
// vector<int> g(N);
void solve()
{
    //*[START]*//
    ll n, y, X = 0, Y = 0;
    cin >> n;
    ll x = n / 7;
    bool ok = false;
    for (int i = x; i >= 0; i--)
    {
        Y = n - (x * 7);
        if (Y % 4 == 0)
        {
            y = Y / 4;
            ok = true;
            break;
        }
        else
            x--;
    }
    if (ok)
    {
        for (int i = 0; i < y; i++)
            cout << 4;
        for (int i = 0; i < x; i++)
            cout << 7;
        cout << '\n';
    }
    else
        cout << -1 << '\n';
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