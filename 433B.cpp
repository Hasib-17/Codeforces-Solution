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
    ll n, sum = 0, sum2 = 0;
    cin >> n;
    vector<ll> v1(n), pref(n + 1), pref2(n + 1);
    pref[0] = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
        sum += v1[i];
        pref[i + 1] = sum;
    }
    sort(all(v1));
    pref2[0] = 0;
    for (int i = 0; i < n; i++)
    {
        sum2 += v1[i];
        pref2[i + 1] = sum2;
    }
    // for (auto i : pref2)
    //     cout << i << " ";
    // cout << '\n';
    ll m;
    cin >> m;
    while (m--)
    {
        int type, l, r;
        cin >> type >> l >> r;
        if (type == 1)
        {
            cout << pref[r] - pref[l - 1] << '\n';
        }
        else
            cout << pref2[r] - pref2[l - 1] << '\n';
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