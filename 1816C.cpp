/*Author: Hasib; Date:26/01/23*/
#include <bits/stdc++.h>
#define ii_65                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long int
#define ul unsigned long long
#define dec greater<int>()
const ll N = 1e6 + 1;
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define all(x) (x).begin(), (x).end()
using namespace std;
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
// vector<int> g(N);
void solve()
{
    //*[START]*//
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    if (is_sorted(all(v)))
    {
        cout << "YES\n";
        return;
    }
    for (int i = 0; i < n - 2; i++)
    {
        if (v[i] > v[i + 1])
        {
            ll df = v[i] - v[i + 1];
            v[i + 1] += df;
            v[i + 2] += df;
        }
        else if (v[i] < v[i + 1])
        {
            ll df = v[i + 1] - v[i];
            v[i + 1] -= df;
            v[i + 2] -= df;
        }
    }

    // for (auto i : v)
    //     cout << i << ' ';
    // cout << '\n';
    if (n % 2)
        cout << "YES\n";
    else
    {
        if (v[n - 1] >= v[n - 2])
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ii_65;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}