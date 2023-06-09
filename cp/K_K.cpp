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
    int ans = INT_MAX;
    string s;
    cin >> s;
    map<char, int> mp;
    for (auto i : s)
        mp[i]++;
    for (auto c : mp)
    {
        // int x = count(s.begin(), s.end(), c.first);
        // cout << c.first << ' ' << x << '\n';
        int cnt = 0;
        string t = s;
        while (t.size() != count(t.begin(), t.end(), c.first))
        {
            for (int i = 1; i < t.size(); i++)
                if (t[i] == c.first)
                    t[i - 1] = c.first;
            cnt++;
            t.pop_back();
        }
        ans = min(cnt, ans);
    }
    cout << ans << '\n';
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