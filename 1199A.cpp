/*Author: Hasib; Date:21/10/22*/
#include <bits/stdc++.h>
#define ii_65                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long int
#define dec greater<int>()
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define all(x) (x).begin(), (x).end()
using namespace std;
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }

void solve()
{
    //* @brief [START]*//
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    for (int i = 1; i <= n; i++)
    {
        int f = 1;
        for (int j = i - 1; j >= i - x && j >= 1; j--)
        {
            if (v[i] >= v[j])
            {
                f = 0;
                break;
            }
        }
        for (int j = i + 1; j <= i + y && j <= n; j++)
        {
            if (v[i] >= v[j])
            {
                f = 0;
                break;
            }
        }
        if (f)
        {
            cout << i << '\n';
            return;
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
