/*Author: Hasib; Date:11/12/22*/
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
#define out(x) cout << #x << " -> " << x << "\n"
using namespace std;
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
// const ll N = 1e9;
string toBinary(int n) // always save in my codes:
{
    string r;
    while (n != 0)
    {
        r += (n % 2 == 0 ? "0" : "1");
        n /= 2;
    }
    return r;
}
void solve()
{
    ll n, a, b, pos = -1;
    cin >> a >> b >> n;
    for (int i = 0; i < 10; i++)
    {
        if ((a * 10 + i) % b == 0)
        {
            a = (a * 10 + i);
            pos = 0;
            break;
        }
    }
    if (pos == -1)
        cout << -1 << '\n';
    else
    {
        cout << a;
        for (int i = 1; i < n; i++)
            cout << 0;
        cout << '\n';
    }
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
