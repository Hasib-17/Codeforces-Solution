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
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(all(v));
    int op = n / 2;
    for (int i = 1; i < n; i++)
    {
        if (op > 0)
        {
            cout << v[i] << ' ' << v[0] << '\n';
            op--;
        }
        if (op == 0)
            break;
    }
}
int main()
{
    ii_65;
    ll t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}