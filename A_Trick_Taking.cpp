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
    int n, k;
    cin >> n >> k;
    vector<int> c(n), r(n);
    map<int, vector<int>> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    map<int, int> indx;
    for (int i = 0; i < n; i++)
    {
        cin >> r[i];
        indx[r[i]] = i + 1;
    }
    for (int i = 0; i < n; i++)
    {
        mp[c[i]].push_back(r[i]);
    }
    if (mp[k].size() > 0)
    {
        int mx = 0;
        for (auto j : mp[k])
        {
            if (j > mx)
                mx = j;
        }
        cout << indx[mx] << '\n';
    }
    else
    {
        int mx = 0;
        for (auto j : mp[c[0]])
        {
            if (j > mx)
                mx = j;
        }
        cout << indx[mx] << '\n';
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
