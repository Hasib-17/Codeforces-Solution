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
bool sortbysec(const pair<string, int> &a, const pair<string, int> &b) { return (a.second < b.second); }
// int a[50];
void solve()
{
    //*[START]*//
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<string, int> mp;
    for (int i = 0; i < n - 1; i++)
    {
        string t = s.substr(i, 2);
        mp[t]++;
    }
    // sort(all(mp), sortbysec);
    vector<pair<int, string>> p;
    for (auto i : mp)
        p.push_back({i.second, i.first});
    sort(all(p));
    reverse(all(p));
    // for (int i = 0; i < p.size(); i++)
    // {
    //     cout << p[i].first << " " << p[i].second << '\n';
    // }
    cout << p[0].second << '\n';
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