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
    ll m, c = 0, ans = 0;
    cin >> m;
    vector<int> res;
    vector<vector<int>> v(m);
    map<int, int> mp;
    for (int i = 0; i < m; i++)
    {
        int n;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            mp[x]++;
            v[i].push_back(x);
        }
    }
    // for (auto i : mp)
    //     cout << i.first << " " << i.second << '\n';
    for (int i = 0; i < m; i++)
    {
        c = 1;
        for (int j = 0; j < v[i].size(); j++)
        {
            if (mp[v[i][j]] == 1 && c)
            {
                c = 0;
                res.push_back(v[i][j]);
                mp[v[i][j]]--;
            }
            else
            {
                mp[v[i][j]]--;
            }
        }
        if (c)
        {
            ans = -1;
            break;
        }
    }
    if (ans == -1)
        cout << -1 << '\n';
    else
    {
        for (auto i : res)
            cout << i << " ";
        cout << '\n';
    }
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