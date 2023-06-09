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
    int n, k, cnt = 0;
    cin >> n >> k;
    string s;
    cin >> s;
    map<char, int> mp;
    for (auto i : s)
        mp[i]++;
    for (int i = 0; i < s.size(); i++)
    {
        char c = s[i], cc = ' ';
        if (s[i] >= 97)
            cc = s[i] - 32;
        else
            cc = s[i] + 32;
        // cout << c << cc << '\n';
        if (mp.count(cc) && (mp[c] > 0 && mp[cc] > 0))
        {
            cnt++;
            mp[c]--;
            mp[cc]--;
        }
    }
    for (auto i : s)
    {
        if (mp[i] >= 2 && k > 0)
        {
            cnt++;
            mp[i] -= 2;
            k--;
        }
    }
    cout << cnt << '\n';
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