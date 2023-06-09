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
    int n, a = 0, b = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        map<char, int> st;
        for (auto i : s)
            st[i]++;
        if (st.size() == 1)
        {
            cout << -1 << '\n';
        }
        else if (st.size() == 4 || st.size() == 3)
            cout << 4 << '\n';
        else
        {
            bool ok = false;
            for (auto i : st)
            {
                if (i.second > 2)
                {
                    ok = true;
                    break;
                }
            }
            if (ok)
                cout << 6 << '\n';
            else
                cout << 4 << '\n';
        }
    }
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ii_65;
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}