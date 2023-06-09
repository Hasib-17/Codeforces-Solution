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
    int n, mn = INT_MAX, mx = 0, ans = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mn = min(v[i], mn);
        mx = max(v[i], mx);
    }
    int indx_mn = min_element(all(v)) - v.begin();
    // cout << indx_mn << '\n';
    int r1 = n - (indx_mn);
    int indx_mx = max_element(all(v)) - v.begin();
    int r2 = n - (indx_mx);
    // cout << indx_mx << '\n';
    ans = max(indx_mn + 1, indx_mx + 1); // 2
    ans = min(ans, max(r1, r2));         // 2
    int temp1 = min(indx_mn + 1, r1);
    int temp2 = min(r2, indx_mx + 1);
    ans = min(ans, temp1 + temp2);
    cout << ans << '\n';
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