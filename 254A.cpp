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
    ll n;
    cin >> n;
    n *= 2;
    vector<int> v(n);
    map<int, int> st;
    map<int, vector<int>> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        st[v[i]]++;
        mp[v[i]].push_back(i + 1);
    }
    // cout << mp[20][0] << " " << mp[20][1] << " ";
    for (auto i : st)
    {
        if (i.second % 2)
        {
            cout << -1 << '\n';
            return;
        }
    }
    for (auto i : st)
    {
        int x = i.first;
        for (int j = 0; j < mp[x].size(); j++)
        {
            if (j > 0 && j % 2 == 0)
                cout << '\n';
            cout << mp[x][j] << " ";
        }
        cout << '\n';
    }
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ii_65;
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}