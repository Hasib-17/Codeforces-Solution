/*Author: Hasib; Date:26/01/23*/
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
vector<int> g(N);
void solve()
{
    //*@[START]*//
    ll n, m, a, ans = 0;
    cin >> n >> m >> a;
    if (n % a == 0 && m % a == 0)
    {
        ans = (n / a) * (m / a);
    }
    else if (n % a && (m % a))
    {
        if (m > a)
            ans = (n / a + 1) * (m / a + 1);
        else
            ans = (n / a + 1);
    }
    else if (n % a != 0 && m % a == 0)
    {
        if (n > a)
            ans = (n / a + 1) * (m / a);
        else
            ans = (m / a);
    }
    else if (n % a == 0 && m % a != 0)
    {
        if (m > a)
            ans = (n / a) * (m / a + 1);
        else
            ans = (n / a);
    }
    cout << ans << '\n';
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