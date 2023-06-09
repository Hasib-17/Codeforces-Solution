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
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    ll evengc = v[1];
    ll oddgc = v[0];
    bool e = true, o = true;
    for (int i = 3; i < n; i += 2)
        evengc = __gcd(evengc, v[i]);
    for (int i = 2; i < n; i += 2)
        oddgc = __gcd(oddgc, v[i]);
    for (int i = 0; i < n; i += 2)
    {
        if (v[i] % evengc == 0)
        {
            e = false;
            break;
        }
    }
    for (int i = 1; i < n; i += 2)
    {
        if (v[i] % oddgc == 0)
        {
            o = false;
            break;
        }
    }
    if (e or o)
    {
        if (e)
            cout << evengc << '\n';
        else
            cout << oddgc << '\n';
    }
    else
        cout << 0 << '\n';
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