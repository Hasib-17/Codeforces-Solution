/*Author: Hasib; Date:18/11/22*/
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
    //* @brief [START]*//
    ll n, ans = INT_MAX;
    cin >> n;
    vector<pair<int, string>> v1, v2;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        string s;
        cin >> s;
        if (s == "11")
            v2.push_back({x, s});
        else
            v1.push_back({x, s});
    }
    sort(all(v1));
    sort(all(v2));
    if (v2.size() > 0)
        ans = v2[0].first;
    // cout << ans << '\n';
    ll l = 0, r = 0, temp = INT_MAX, c = 0;
    for (int i = 0; i < v1.size(); i++)
    {
        string t = v1[i].second;
        // cout << t << '\n';
        if (l == 0 && t[0] == '1')
        {
            c += v1[i].first;
            l = 1;
        }
        else if (r == 0 && t[1] == '1')
        {
            c += v1[i].first;
            r = 1;
        }
        if (r == 1 && l == 1)
        {
            temp = min(temp, c);
            break;
        }
        // cout << temp << '\n';
    }
    if (ans == INT_MAX && (l == 0 || r == 0))
    {
        cout << -1 << '\n';
        return;
    }
    ans = min(ans, temp);
    cout << ans << '\n';
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
