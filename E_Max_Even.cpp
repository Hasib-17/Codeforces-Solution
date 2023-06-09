/*Author: Hasib; Date:11/12/22*/
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
#define out(x) cout << #x << " -> " << x << "\n"
using namespace std;
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }

void solve()
{
    //*[START]*//
    int n;
    cin >> n;
    vector<int> v(n), ev, od;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] % 2)
            od.push_back(v[i]);
        else
            ev.push_back(v[i]);
    }
    if (n == 2 && (od.size() == 1 && ev.size() == 1))
    {
        cout << -1 << '\n';
    }
    else
    {
        sort(all(ev), dec);
        sort(all(od), dec);
        ll res = 0;
        if (ev.size() > 1)
        {
            if (od.size() > 1)
                res = max(ev[0] + ev[1], od[0] + od[1]);
            else
                res = ev[0] + ev[1];
        }
        else if (od.size() > 1)
        {
            if (ev.size() > 1)
                res = max(ev[0] + ev[1], od[0] + od[1]);
            else
                res = od[0] + od[1];
        }
        cout << res << '\n';
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
