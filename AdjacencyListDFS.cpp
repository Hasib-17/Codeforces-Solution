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
const int N = 1e5 + 10;
vector<int> g[N];
bool vis[N];
void dfs(int vertex)
{
    // Take action on vertex after entering the vertex
    vis[vertex] = true;
    cout << vertex << '\n';
    for (auto child : g[vertex])
    {
        if (vis[child])
            continue;
        cout << "Parent " << vertex << ' ' << "Child" << child << '\n';
        // take action on child before entering the child node

        dfs(child);
        // take action on child after exiting child node
    }
    // take action on vertex before exiting the vertex
}
void solve()
{
    //*[START]*//
    int n, m; // n=vertex,m=edges
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u); // undirected graph input
    }
    dfs(1);
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
