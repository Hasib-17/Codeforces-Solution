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
    int n, res = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    bool ok = false;
    if (n == 1)
        res = 1;
    else if (n == 2)
        res = 2;
    else if (n > 2)
    {
        int cur = 0;
        for (int i = 2; i < n; i++)
        {
            if (v[i - 1] + v[i - 2] == v[i])
            {
                cur++;
                ok = true;
            }
            else
            {
                res = max(res, cur);
                if (ok)
                    cur = 0;
            }
        }
        res = max(res, cur);
        res += 2;
    }
    cout << res << '\n';
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