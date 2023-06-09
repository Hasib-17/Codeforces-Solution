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

    ll n, k, cnt = 1, cur = 0, c = 0;
    cin >> n >> k;
    if (k == 1)
    {
        if (n == 1)
            cout << 0 << '\n';
        else
            cout << n - 1 << '\n';
        return;
    }
    while (cnt < k)
    {
        cur = min(cnt, k); // 1 2
        c++;               // 1 2
        cnt *= 2;          // 2 4
        if (cnt >= k)
        {
            n -= cnt;
            break;
        }
        // cout << n << '\n';
    }
    cur = k;
    // cout << n << '\n';
    while (n > 0)
    {
        ll x = n / cur;

        if (n % cur)
            x++;
        c += x;
        n -= (x * cur + 1);
        // cout << n << '\n';
    }
    cout << c << '\n';
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