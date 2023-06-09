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
bool prime(ll x)
{
    ll y = sqrtl(x);
    if (y == 1)
        return true;
    for (int i = 2; i <= y; i++)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}
void solve()
{
    //*@[START]*//
    int n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < n; i++)
    {
        ll x = sqrtl(v[i]);
        if ((x * x == v[i] && x > 1) && prime(x))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
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