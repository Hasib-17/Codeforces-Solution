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
    ll n;
    cin >> n;
    if (n <= 2)
    {
        if (n == 2)
            cout << 0 << " " << 1 << " " << 1 << '\n';
        else if (n == 1)
            cout << 0 << " " << 0 << " " << 1 << '\n';
        else
            cout << 0 << " " << 0 << " " << 0 << '\n';
        return;
    }
    vector<ll> v;
    ll f1 = 0, f2 = 1, res = 0;
    v.push_back(f1);
    v.push_back(f2);
    while (res < n)
    {
        res = f1 + f2;
        v.push_back(res);
        f1 = f2;
        f2 = res;
    }
    ll sz = v.size();
    cout << v[sz - 2] << " " << v[sz - 4] << " " << v[sz - 5] << '\n';
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