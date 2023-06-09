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
    ll n, res = 0;
    cin >> n;
    vector<pair<int, int>> vp;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        vp.push_back({x, y});
    }
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        int a = vp[i].first;
        int b = vp[i].second;
        bool l = true, r = true, up = true, dn = true;
        for (int j = 0; j < n; j++)
        {
            if ((vp[j].first > a && vp[j].second == b) && r)
            {
                cnt++;
                r = false;
            }
            else if ((vp[j].first < a && vp[j].second == b) && l)
            {
                cnt++;
                l = false;
            }
            else if ((vp[j].first == a && vp[j].second < b) && dn)
            {
                dn = false;
                cnt++;
            }
            else if ((vp[j].first == a && vp[j].second > b) && up)
            {
                up = false;
                cnt++;
            }
            else
                continue;
        }
        if (cnt >= 4)
            res++;
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