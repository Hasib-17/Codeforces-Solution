/*Author: Hasib; Date:18/02/23*/
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
void solve()
{
    //*[START]*//
    int n, sum, c = 0;
    cin >> n;
    int a[n][3];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
            cin >> a[i][j];
    }
    for (int i = 0; i < 3; i++)
    {
        sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += a[j][i];
        }
        if (sum != 0)
        {
            c = 1;
            break;
        }
        // cout << sum << '\n';
    }
    if (sum && c)
        cout << "NO\n";
    else
        cout << "YES\n";
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