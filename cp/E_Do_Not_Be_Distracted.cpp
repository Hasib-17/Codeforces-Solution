/*Author: Hasib; Date:11/12/22*/
#include <bits/stdc++.h>
#define ii_65                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long int
#define ul unsigned long long
#define dec greater<string>()
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define all(x) (x).begin(), (x).end()
using namespace std;
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
void solve()
{
    //*@[START]*//
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<char> st;
    char c = s[0];
    int f = 0;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] != c)
        {
            if (st.find(s[i]) == st.end())
            {
                st.insert(s[i - 1]);
                c = s[i];
            }
            else
            {
                f = 1;
                break;
            }
        }
    }
    if (f)
        cout << "NO\n";
    else
        cout << "YES\n";
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