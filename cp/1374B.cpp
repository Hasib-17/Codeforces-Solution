/*Author: Hasib; Date:26/01/23*/
#include <bits/stdc++.h>
#define ii_65                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long int
#define ul unsigned long long
#define dec greater<int>()
const ll N = 1e7;
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define all(x) (x).begin(), (x).end()
using namespace std;
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }

void solve()
{
    //*@[START]*//
    ll n, cnt = 0;
    cin >> n;
    while (n >= 1)
    {
        if (n % 6 == 2 || n % 6 == 4 || n % 6 == 5 || n % 6 == 7 || n % 6 == 8)
        {
            cout << -1 << '\n';
            return;
        }
        if (n % 6 == 0)
            n /= 6;
        else
            n *= 2;
        cnt++;
    }
    cout << cnt << '\n';
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