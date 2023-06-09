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
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    set<int> st;
    map<int, int> mp;
    int temp = n;
    for (int i = n - 1; i >= 0; i--)
    {
        st.insert(v[i]);
        mp[n] = st.size();
        n--;
    }
    // for (auto i : mp)
    //     cout << i.first << " " << i.second << '\n';
    while (m--)
    {
        int x;
        cin >> x;
        cout << mp[x] << '\n';
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