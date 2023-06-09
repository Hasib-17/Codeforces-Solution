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
    //*[START]*//
    int n, m;
    cin >> n >> m;
    string s1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string asc = s1;
    reverse(all(s1));
    vector<string> s(n), ss;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        ss.push_back(s[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < m; j += 2)
        {
            char c = ss[i][j];
            // char c1 = ss[i][0];
            int indx = asc.find(c);
            char t = s1[indx];
            ss[i][j] = t;
        }
    }
    vector<pair<string, int>> vp;
    for (int i = 0; i < n; i++)
    {
        vp.push_back({ss[i], i + 1});
        // cout << ss[i] << '\n';
    }
    sort(all(vp));
    for (int i = 0; i < n; i++)
        cout << vp[i].second << ' ';
    cout << '\n';
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