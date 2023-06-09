/*Author: Hasib; Date:26/01/23*/
#include <bits/stdc++.h>
#define ii_65                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long int
#define ul unsigned long long
#define dec greater<int>()
const ll N = 1e6 + 1;
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define all(x) (x).begin(), (x).end()
using namespace std;
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
// vector<int> g(N);
void solve()
{
    //*[START]*//
    string s;
    cin >> s;
    int pos = 0;
    for (int i = 1; i < s.size() - 1; i++)
    {
        if (s[i] == 'a')
        {
            pos = i;
            break;
        }
    }
    if (pos)
        cout << s.substr(0, pos) << " " << 'a' << " " << s.substr(pos + 1) << '\n';
    else
        cout << s[0] << ' ' << s.substr(1, s.size() - 2) << ' ' << s[s.size() - 1] << '\n';
}
int main()
{
    // freopen("cowqueue.in", "r", stdin);
    // freopen("cowqueue.out", "w", stdout);
    ii_65;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}