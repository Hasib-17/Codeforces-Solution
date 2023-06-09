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
    ll n, k;
    cin >> n >> k;
    if (k > n)
        cout << "NO\n";
    else
    {
        ll a = k; // 6
        while (a <= n)
        {
            if (n == a)
            {
                cout << "YES\n";
                return;
            }
            if (a % 2)
                a = a + a * 2;
            else
                a = a + a / 2;
        }
        ll b = k;
        while (b <= n)
        {
            if (n == b)
            {
                cout << "YES\n";
                return;
            }
            if (a % 2 == 0)
                b = b + b / 2;
            else
                b = b + b * 2;
        }
        cout << "NO\n";
    }
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
