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
    ll a, b;
    cin >> a >> b;
    if (a % 2 == 0 && b % 2 == 0)
    {
        cout << 2 << '\n';
        cout << a - 1 << " " << b - 2 << "\n";
        cout << a << ' ' << b << '\n';
    }
    else if ((a % 2 != 0 && b % 2 != 0) || b == a + 1)
    {
        cout << 1 << '\n';
        cout << a << ' ' << b << '\n';
    }
    else
    {
        cout << 2 << '\n';
        cout << a - 1 << " " << b - 1 << "\n";
        cout << a << ' ' << b << '\n';
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