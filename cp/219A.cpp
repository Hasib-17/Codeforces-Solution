/*Author: Hasib; Date:26/01/23*/
#include <bits/stdc++.h>
#define ii_65                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long int
#define ul unsigned long long
#define dec greater<int>()
const ll N = 1e5;
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define all(x) (x).begin(), (x).end()
using namespace std;
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
// vector<int> g(N);
void solve()
{
    //*@[START]*//
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char, int> mp;
    for (auto i : s)
        mp[i]++;
    for (auto &i : mp)
    {
        if (i.second % n == 0)
        {
            i.second = i.second / n;
        }
        else
        {
            cout << "-1\n";
            return;
        }
    }
    string res;
    for (auto i : mp)
    {
        while (i.second > 0)
        {
            res.push_back(i.first);
            i.second--;
        }
    }
    for (int i = 0; i < n; i++)
        cout << res;
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