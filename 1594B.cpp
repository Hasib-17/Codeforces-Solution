/*Author: Hasib; Date:09/01/23*/
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
// int a[50];
void solve()
{
    //*[START]*//
    ll n, k, sum = 0, mod = 1e9 + 7, y = 0;
    cin >> n >> k;
    ll i = 1;
    while (k > 0)
    {
        if (k % 2)
        {
            sum += i % mod;
            // cout << i << " " << sum << '\n';
        }
        k /= 2;
        i *= n;
        i %= mod;
        // cout << i << ' ';
    }
    cout << sum % mod << '\n';
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