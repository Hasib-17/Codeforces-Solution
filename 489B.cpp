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
    int n, cnt = 0;
    cin >> n;
    vector<int> b(n);
    map<int, int> bb, gg;
    for (auto &i : b)
    {
        cin >> i;
        bb[i]++;
    }
    int m;
    cin >> m;
    vector<int> g(m);
    for (auto &i : g)
    {
        cin >> i;
        gg[i]++;
    }
    sort(all(b));
    sort(all(g));
    if (n >= m)
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (b[j] != -1 && abs(g[i] - b[j]) <= 1)
                {
                    cnt++;
                    b[j] = -1;
                    break;
                }
            }
        }
        cout << cnt << '\n';
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (g[j] != -1 && abs(b[i] - g[j]) <= 1)
                {
                    cnt++;
                    g[j] = -1;
                    break;
                }
            }
        }
        cout << cnt << '\n';
    }
    // int sz = min(n, m);
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
