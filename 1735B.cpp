/*Author: Hasib; Date:27/12/22*/
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
    ll n, cnt = 0, ans = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(all(v));
    int x = 2 * v[0] - 1;
    for (int i = 1; i < n; i++)
    {
        if (v[i] % x)
            cnt += v[i] / x;
        else
        {
            cnt += v[i] / x;
            cnt--;
        }
        // cout << "cnt : " << cnt << '\n';
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