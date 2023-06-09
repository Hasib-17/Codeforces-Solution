/*Author:-> Hasib; Date:26/01/23*/
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
vector<int> g(N);
void solve()
{
    //*[START]*//
    ll n, m;
    cin >> n >> m;
    vector<ll> v1(n), v2(m);
    for (auto &i : v1)
        cin >> i;
    for (auto &i : v2)
        cin >> i;
    sort(all(v1));
    sort(all(v2));
    ll i = 0, j = 0, mn = 1e9;
    while (i < n && j < m)
    {
        mn = min(mn, abs(v1[i] - v2[j]));
        if (v1[i] > v2[j])
        {
            j++;
        }
        else if (v1[i] < v2[j])
        {
            i++;
        }
        else
        {
            i++;
            j++;
        }
    }
    cout << mn;
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