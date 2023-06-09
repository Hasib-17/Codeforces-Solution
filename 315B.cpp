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
    ll n, m, carry = 0;
    cin >> n >> m;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    while (m--)
    {
        int x, y, z;
        cin >> x;
        if (x == 3 || x == 2)
            cin >> y;
        else
            cin >> y >> z;
        if (x == 3)
            cout << v[y - 1] + carry << '\n';
        else if (x == 2)
            carry += y;
        else
        {
            // int g = v[y - 1];
            v[y - 1] = z;
            v[y - 1] -= carry;
        }
        // cout << carry << '\n';
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