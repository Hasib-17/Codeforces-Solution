///*Author:-> Hasib; Date:26/01/23*/
#include <bits/stdc++.h>
#define ii_65                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long int
#define ul unsigned long long
#define dec greater<int>()
const ll N = 1e9 + 7;
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define all(x) (x).begin(), (x).end()
using namespace std;
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
// vector<int> g(N);
int factorial(int n)
{
    if (n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}
void solve()
{
    //*[START]*//
    ll x, y;
    cin >> x >> y;
    x %= N;
    y %= N;
    ll a = x * x;
    a %= N;
    ll aa = a * a;
    aa %= N;
    ll b = y * y;
    b %= N;
    ll res1 = (4 * a * y) % N;
    ll res2 = (aa + (4 * b)) % N;

    // cout << res1 << ' ' << res2 << '\n';
    if (res1 == res2)
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
// wearepstu