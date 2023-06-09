/*Author: Hasib; Date:26/11/22*/
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
    int n, a, b, ans = 0;
    cin >> n >> a >> b;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        set<char> st;
        for (int i = 0; i < 3; i++)
            st.insert(s[i]);
        int sz = st.size();
        if (sz <= 2)
        {
            int x = a + b;
            int y = 3 * a;
            int z = b + b;
            int r1 = min(x, y);
            int r = min(r1, z);
            ans += r;
        }
        else
        {
            int x = min(a, b);
            ans += (3 * x);
        }
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
