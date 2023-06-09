/*Author: Hasib; Date:26/01/23*/
#include <bits/stdc++.h>
#define ii_65                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long int
#define ul unsigned long long
#define dec greater<int>()
const ll N = 1e9 + 1;
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define all(x) (x).begin(), (x).end()
using namespace std;
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
// vector<int> g(N);
void solve()
{
    //*[START]*//
    int n, l = 0;
    cin >> n;
    string s;
    cin >> s;
    set<char> st;
    for (int i = 0; i < n; i++)
        st.insert(s[i]);
    if (st.size() == 1)
    {
        cout << -1 << '\n';
        return;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (s.substr(i, 2) == "RL")
        {
            cout << 0 << '\n';
            return;
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == 'L' && s[i + 1] == 'R')
        {
            l = i + 1;
            break;
        }
    }
    cout << l << '\n';
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