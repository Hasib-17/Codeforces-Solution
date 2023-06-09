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
bool isSqure(int x)
{
    int y = sqrtl(x);
    return (y * y == x);
}
ul w, h, n;
bool possible(ul x)
{
    ul a = floor(x / w);
    ul b = floor(x / h);
    return ((a * b) >= n);
}

void solve()
{
    //*[START]*//
    cin >> w >> h >> n;
    ul lo = 0, hi = 1e17, mid;
    // while (!(possible(hi)))
    //     hi *= 2;
    while (hi - lo > 1)
    {
        mid = (lo + hi) / 2;
        if (possible(mid))
            hi = mid;
        else
            lo = mid;
    }
    cout << hi << '\n';
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
