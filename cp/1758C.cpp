/*Author: Hasib; Date:25/11/22*/
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
    ll n, x;
    cin >> n >> x;
    vector<ll> v;
    if (n % x != 0)
    {
        cout << -1 << endl;
        return;
    }
    int a = n / x;
    ll h = pow(2, 16);
    if (a == h)
    {
        cout << -1 << '\n';
        return;
    }
    v.emplace_back(0);
    v.emplace_back(x);
    for (int i = 2; i < n; i++)
    {
        if (a >= 200)
        {
            cout << -1 << endl;
            return;
        }
        v.emplace_back(i);
    }
    for (int i = 2; i < 50 && i * i <= a; i++)
    {
        while (a % i == 0)
        {
            v[x] = x * i;
            x *= i;
            a = n / x;
        }
    }
    if (x < n)
        v[x] = n;
    v.emplace_back(1);
    // for (auto i : v)
    //     cout << i << ' ';
    for (int i = 1; i <= n; i++)
        cout << v[i] << " ";
    cout << '\n';
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
