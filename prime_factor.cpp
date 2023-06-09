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
    //*@[START]*//
    int n = 1e7 + 1;
    // cin >> n;
    vector<ll> v(n + 1, 0);
    for (int i = 2; i <= n; i++)
        v[i] = i;
    for (ll i = 2; i * i <= n; i++)
    {
        if (v[i] == i)
        {
            for (ll j = i * i; j <= n; j += i)
                v[j] = min(i, v[j]);
        }
    }
    cout << v[n] << '\n';
    int N;
    cin >> N;
    while (N > 1)
    {
        cout << v[N] << " ";
        N /= v[N];
    }
    cout << '\n';
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