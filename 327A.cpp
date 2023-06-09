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
    int n, cnt = 0, res = 0;
    cin >> n;
    vector<int> v(n), a;
    for (auto &i : v)
    {
        cin >> i;
        if (i == 1)
        {
            a.push_back(-1);
            cnt++;
        }
        else
            a.push_back(1);
    }
    // for (auto i : a)
    //     cout << i << ' ';
    for (int i = 0; i < n; i++)
    {
        int cur = 0;
        for (int j = i; j < n; j++)
        {
            cur += a[j];
            res = max(cur, res);
            cur = max(0, cur);
        }
    }
    if (cnt == n)
        cnt--;
    cout << res + cnt << '\n';
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