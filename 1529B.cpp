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
#define out(x) cout << #x << " -> " << x << "\n"
using namespace std;
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
void solve()
{
    //*[START]*//
    int n;
    cin >> n;
    vector<int> v(n), res;
    for (auto &i : v)
        cin >> i;
    sort(all(v));
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] <= 0)
            res.push_back(v[i]);
        else
        {
            res.push_back(v[i]);
            break;
        }
    }
    if (res.size() == 1)
    {
        cout << 1 << '\n';
        return;
    }
    else
    {
        ans = res.size();
        int temp = res[res.size() - 1];
        for (int i = 1; i < res.size() - 1; i++)
        {
            int x = abs(res[i] - res[i - 1]);
            // out(x);
            if (x < temp)
            {
                ans--;
                break;
            }
        }
        // cout << ans << '\n';
    }
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