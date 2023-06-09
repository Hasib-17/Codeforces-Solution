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
using namespace std;
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
void solve()
{
    //*@[START]*//
    ll n, cnt = 1;
    cin >> n;
    vector<int> v(n), v2;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }
    for (auto i : mp)
        v2.push_back(i.first);
    for (int i = 1; i < v2.size(); i++)
    {
        if (mp[v[i]] == mp[v[i - 1]])
            cnt++;
        int df = min(mp[v2[i]], mp[v2[i - 1]]);
        // cout << df << '\n';
        mp[v2[i]] -= df;
        mp[v2[i - 1]] -= df;
        if (mp[v2[i - 1]])
            v2[i] = v2[i - 1];
    }
    if (n > 1 && cnt == n)
        cout << 0 << '\n';
    else
        cout << mp[v2[v2.size() - 1]] << '\n';
    // for (auto i : mp)
    //     cout << i.first << ' ' << i.second << '\n';
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