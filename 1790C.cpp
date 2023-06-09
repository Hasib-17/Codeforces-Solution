/*Author: Hasib; Date:09/01/23*/
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
// int a[50];
void solve()
{
    //*@[START]*//
    int n, h = 0;
    cin >> n;
    int a[n][n - 1];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
            cin >> a[i][j];
    }
    vector<int> v;
    map<int, int> mp;
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            h = a[j][i];
            mp[h]++;
        }
    }
    int k = 0;
    for (auto i : mp)
    {
        if (i.second > 1)
            v.push_back(i.first);
        else
            k = i.first;
    }
    v.push_back(k);
    mp.clear();
    set<int> st;
    st.insert(k);
    // cout << k << '\n';
    for (int i = 1; i < n - 1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int r = a[j][i];
            if (st.find(r) == st.end())
            {
                st.insert(r);
                v.push_back(r);
                k = r;
            }
            else
                continue;
        }
    }
    for (auto u : v)
        cout << u << " ";
    cout << '\n';
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