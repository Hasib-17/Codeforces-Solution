/*Author: Hasib; Date:09/01/23*/
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
using namespace std;
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
// int a[50];

void solve()
{
    //*[START]*//
    ll n;
    cin >> n;
    vector<int> v(n);
    map<int, int> mp;
    vector<vector<int>> vv(2000);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        vv[0].push_back(v[i]);
        mp[v[i]]++;
    }
    for (int i = 1; i < 2000; i++)
    {
        for (int j = 0; j < n; j++)
        {
            v[j] = mp[v[j]];
            vv[i].push_back(v[j]);
        }
        mp.clear();
        for (int i = 0; i < n; i++)
            mp[v[i]]++;
        // for (auto i : v)
        //     cout << i << ' ';
        // cout << '\n';
    }
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //         cout << vv[i][j] << " ";
    //     cout << '\n';
    // }
    int q;
    cin >> q;
    while (q--)
    {
        int x, k;
        cin >> x >> k;
        // if (k == 0)
        // {
        //     cout << v[x - 1] << '\n';
        //     continue;
        // }
        // if (k >= mp.size())
        //     k = n;
        if (k > 2000)
            k = 2000 - 1;
        cout << vv[k][x - 1];
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