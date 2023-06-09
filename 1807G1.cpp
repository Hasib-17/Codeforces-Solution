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
    vector<int> v(n), res;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    if (n == 1)
    {
        if (v[0] > 1)
            cout << "NO\n";
        else
            cout << "YES\n";
        return;
    }
    sort(all(v));
    res.push_back(1);
    ll sum = 1;
    bool ok = true;
    for (int i = 1; i < n; i++)
    {
        if (sum >= v[i])
            sum += v[i];
        else
        {
            ok = false;
            break;
        }
    }
    if (ok)
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