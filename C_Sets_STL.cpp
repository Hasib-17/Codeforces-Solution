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
    int n;
    cin >> n;
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a == 1)
            st.insert(b);
        else if (a == 2)
        {
            if (st.find(b) != st.end())
                st.erase(b);
            else
                continue;
        }
        else
        {
            if (st.find(b) != st.end())
                cout << "Yes\n";
            else
                cout << "No" << '\n';
        }
    }
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