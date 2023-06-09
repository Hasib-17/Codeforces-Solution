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
void solve()
{
    //*@[START]*//

    int n, res = 0, res1 = 0;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    int gcd = v[0];
    if (n == 1 and v[0] > 1)
    {
        cout << n << '\n';
        return;
    }
    for (int i = 1; i < n; i++)
    {
        gcd = __gcd(gcd, v[i]);
    }
    if (gcd == 1)
    {
        cout << 0 << '\n';
        return;
    }
    gcd = __gcd(n, v[n - 1]);
    for (int j = 0; j < n - 1; j++)
    {
        gcd = __gcd(gcd, v[j]);
        if (gcd == 1)
        {
            cout << 1 << '\n';
            return;
        }
    }
    gcd = __gcd(n - 1, v[n - 2]);
    gcd = __gcd(gcd, v[n - 1]);
    for (int j = 0; j < n - 2; j++)
    {
        gcd = __gcd(gcd, v[j]);
    }
    if (gcd == 1)
    {
        cout << 2 << '\n';
        return;
    }
    cout << 3 << '\n';
    // cout << (__gcd(1, 1)) << '\n';
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