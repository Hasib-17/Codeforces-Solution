/*Author: Hasib; Date:18/11/22*/
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
    //* @brief [START]*//
    int n, k, res = 0;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    vector<int> vc = v;
    sort(all(vc), dec);
    for (int i = 0; i < k; i++)
    {
        res += vc[i];
    }
    cout << res << '\n';
    if (k == 1)
    {
        cout << n << '\n';
        return;
    }
    else
    {
        vector<int> h;
        int x = 0;
        int m = k;
        while (x < n && m > 0)
        {
            h.push_back(k);
            x += k;
            // n -= k;
            m--;
        }
        for (auto i : h)
            cout << i << ' ';
        cout << '\n';
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
