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
void solve()
{
    //*[START]*//
    ll n, zr = 0, on = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        zr += (v[i] == 0);
        on += (v[i] == 1);
    }
    if (on > 0 && zr > 0)
    {
        cout << "NO\n";
        return;
    }
    sort(all(v));
    bool cong = false;
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] + 1 == v[i + 1])
        {
            cong = true;
            break;
        }
    }
    if (cong && on > 0)
        cout << "NO\n";
    else
        cout << "YES\n";
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