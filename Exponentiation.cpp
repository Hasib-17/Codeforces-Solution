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
ll exponential(ll a, ll b, ll mod)
{
    if (b == 0)
        return 1;
    if (b % 2)
    {
        ll x = a % mod;
        ll y = exponential(a, b - 1, mod);
        return (x * y) % mod;
    }
    else
    {
        ll x = exponential(a, b / 2, mod);
        return (x * x) % mod;
    }
}
void solve()
{
    //*@[START]*//
    ll a, b;
    cin >> a >> b;
    ll mod = 1000000007;
    cout << exponential(a, b, mod) << '\n';
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