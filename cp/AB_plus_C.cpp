///*Author:-> Hasib; Date:26/01/23*/
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
    ll n;
    cin >> n;
    ll x = n;
    if (x == 1e12)
    {
        cout << 1000 << ' ' << 1000 << ' ' << 1e6 << '\n';
        return;
    }
    ll sq = sqrtl(n);
    if (sq * sq == n)
        n--;
    sq = sqrtl(n);
    if (sq == 0)
    {
        cout << -1 << '\n';
        return;
    }
    cout << sq << ' ' << sq << ' ' << (x - sq * sq) << '\n';
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