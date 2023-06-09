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
void solve()
{
    //*[START]*//
    ll n, k, d, w;
    cin >> n >> k >> d >> w;
    ll r = k - 1;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    ll pati = 0, dose = 1, cnt = 0;
    for (ll i = 0; i < n; i++)
    {
        if (pati == 0 || dose <= v[i])
        {
            cnt++;
            pati = r;
            dose = v[i] + w + d + 1;
        }
        else
            pati--;
    }
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