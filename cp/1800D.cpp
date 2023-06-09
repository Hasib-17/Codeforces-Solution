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
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<string> st;
    for (int i = 0; i < n - 1; i++)
    {
        string tt;
        for (int j = 0; j < s.size(); j++)
        {
            if (i == j || i + 1 == j)
                continue;
            else
            {
                tt.push_back(s[j]);
            }
        }
        st.insert(tt);
    }
    cout << st.size() << '\n';
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