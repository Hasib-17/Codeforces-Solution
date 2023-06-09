/*Author: Hasib; Date:11/12/22*/
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
    //*@[START]*//
    string s;
    cin >> s;
    map<char, int> st;
    for (auto i : s)
        st[i]++;
    if (st.size() > 2)
        cout << "YES\n";
    else if (st.size() == 2)
    {
        int c = 0;
        for (auto i : st)
        {
            if (i.second > 1)
                c++;
        }
        if (c == st.size())
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    else
        cout << "NO\n";
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