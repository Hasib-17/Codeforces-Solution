/*Author: Hasib; Date:26/01/23*/
#include <bits/stdc++.h>
#define ii_65                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long int
#define ul unsigned long long
#define dec greater<int>()
const ll N = 1e6 + 1;
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define all(x) (x).begin(), (x).end()
using namespace std;
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
// vector<int> g(N);
void solve()
{
    //*[START]*//
    ll n;
    cin >> n;
    int a[2][n];
    int l = (2 * n) - 1, r = n - 1;
    for (int j = 0; j < n; j += 2)
    {
        a[0][j] = l;
        a[0][j + 1] = r;
        l -= 2;
        r -= 2;
    }
    l = n, r = (2 * n) - 2;
    for (int i = 0; i < n; i += 2)
    {
        a[1][i] = l;
        a[1][i + 1] = r;
        l -= 2;
        r -= 2;
    }
    a[0][n - 1] = 1;
    a[1][n - 1] = 2 * n;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ii_65;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}