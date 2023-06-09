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
// const ll N = 1e9;
void solve()
{
    int n, m, d;
    cin >> n >> m >> d;
    int a[n][m];
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            v.push_back(a[i][j]);
        }
    }
    int sz = v.size();
    sort(all(v));
    if (sz == 2)
    {
        if (v[1] == v[0])
            cout << 0 << '\n';
        else if (v[1] - v[0] % d == 0)
            cout << (v[1] - v[0]) / d << '\n';
        else
            cout << -1 << '\n';
    }
    else if (sz == 1)
        cout << 0 << '\n';
    else
    {
        int mid = sz / 2, cnt = 0, c = 0;
        for (int i = 0; i < sz; i++)
        {
            int dif = abs(v[i] - v[mid]);
            if (dif % d == 0)
                cnt += (dif / d);
            else
            {
                c = 1;
                break;
            }
        }
        if (c)
            cout << -1 << '\n';
        else
            cout << cnt << '\n';
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
