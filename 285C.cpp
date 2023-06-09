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
    ll n, res = 0;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(all(v), dec);
    ll temp = n;
    for (int i = 0; i < n; i++)
    {
        // cout << v[i] << " ";
        if (v[i] > temp)
        {
            res += (v[i] - temp);
            temp--;
        }
        else if (v[i] < temp)
        {
            res += (temp - v[i]);
            temp--;
        }
        else
            temp--;
    }
    cout << res << '\n';
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