///*Author:-> Hasib; Date:26/01/23*/
#include <bits/stdc++.h>
#define ii_65                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long int
#define ul unsigned long long
#define dec greater<int>()
const ll N = 1e5;
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define all(x) (x).begin(), (x).end()
using namespace std;
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
// vector<int> g(N);
int factorial(int n)
{
    if (n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}
void solve()
{
    //*[START]*//
    set<int> st;
    map<int, int> mp;
    int aa = 0, bb = 0;
    for (int i = 0; i < 6; i++)
    {
        int a;
        cin >> a;
        st.insert(a);
        mp[a]++;
    }
    // cout << aa << " " << bb << '\n';
    if (mp.size() != 2)
        cout << "No\n";
    else
    {
        int cnt = 0;
        for (auto i : st)
        {
            if (mp[i] >= 2)
                cnt++;
        }
        if (cnt == 2)
            cout << "Yes\n";
        else
            cout << "No\n";
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
// wearepstu