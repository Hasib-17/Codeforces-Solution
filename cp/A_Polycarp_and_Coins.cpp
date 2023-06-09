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
using namespace std;
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
void solve()
{
    //*@[START]*//
    ll n;
    cin >> n;
    ll l = n / 3;
    if (n % 3)
    {
        l++;
        if ((l - 1) * 2 + l == n)
            cout << l << ' ' << l - 1 << '\n';
        else if ((l - 1) + (2 * l) == n)
            cout << l - 1 << ' ' << l << '\n';
    }
    else
        cout << l << ' ' << l << '\n';
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