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
const int N = 1e4 + 5;
vector<int> g[N];
int vis[N];
int n;
vector<int> res;
int cnt = 0;
void dfs(int vertex)
{
    vis[vertex] = 1;
    cnt++;
    cout << vertex << ' ';
    // res.push_back(vertex);
    for (auto child : g[vertex])
    {
        if (vis[child])
            continue;
        dfs(child);
    }
}
void solve()
{
    //*[START]*//
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    for (int i = 1; i <= n - 1; i++)
        g[i].push_back(i + 1);
    for (int i = 0; i < n; i++)
    {
        if (v[i])
            g[n + 1].push_back(i + 1);
        else
            g[i + 1].push_back(n + 1);
    }
    // dfs(1);
    //  cout << '\n';
    //  for (int i = 0; i <= n + 1; i++)
    //  {
    //      vis[i] = 0;
    //  }
    for (int i = 1; i <= n + 1; i++)
    {
        cnt = 0;
        dfs(i);
        out(cnt);
        cout << '\n';
        for (int i = 0; i <= n + 1; i++)
        {
            vis[i] = 0;
        }
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
