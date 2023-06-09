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
const ll N = 2 * 1e5 + 10;
int n;
vector<int> g[N];
unordered_map<int, int> mp;
void dfs(int node, int parent = -1)
{
    mp[node]++;
    for (auto child : g[node])
    {
        if (child == parent)
            continue;
        dfs(child, node);
        mp[node] += mp[child];
    }
}
void solve()
{
    //*[START]*//
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        int a;
        cin >> a;
        g[a].push_back(i + 1);
        g[i + 1].push_back(a);
    }
    dfs(1);
    for (int i = 1; i <= n; i++)
        cout << mp[i] - 1 << ' ';
    cout << '\n';
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
