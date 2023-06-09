/*Author: Hasib; Date:18/11/22*/
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
void solve()
{
    //* @brief [START]*//
    ll n, cnt = 0, zr = 0;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        zr += (v[i] == 0);
    }
    int mn = *min_element(all(v));
    for (int i = 0; i < n; i++)
    {
        if (v[i] != mn)
            cnt++;
    }
    if (n == zr)
        cout << 0 << '\n';
    else if (cnt == 0)
        cout << -1 << '\n';
    else
        cout << cnt << '\n';
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
