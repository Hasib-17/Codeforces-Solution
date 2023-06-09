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
void solve()
{
    //*[START]*//
    int n, cnt = 0, pos = -1;
    cin >> n;
    string s;
    cin >> s;
    stack<char> st;
    for (int i = 0; i < n; i++)
    {
        if (st.empty())
        {
            st.push(s[i]);
            if (s[i] == ')')
                pos = i;
        }

        else
        {
            if (st.top() == '(')
            {
                cnt++;
                st.pop();
            }
            else if (st.top() == ')')
            {
                if (s[i] != ')')
                    continue;
                else
                {
                    pos = -1;
                    st.pop();
                    cnt++;
                }
            }
        }
    }
    // cout << pos << '\n';
    int sz = st.size();
    if (pos != -1)
        sz = n - pos;
    cout << cnt << " " << sz << '\n';
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ii_65;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}