/*Author: Hasib; Date:11/12/22*/
#include <bits/stdc++.h>
#define ii_65                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long int
#define ul unsigned long long
#define dec greater<string>()
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define all(x) (x).begin(), (x).end()
#define out(x) cout << #x << " -> " << x << "\n"
using namespace std;
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
void solve()
{
    //*[START]*//
    ll n, cnt = 0;
    cin >> n;
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x % 3 == 0)
            cnt++;
        else
            v.push_back(x % 3);
    }
    sort(all(v));
    int l = 0, r = v.size() - 1;
    // for (auto i : v)
    //     cout << i << ' ';
    // cout << '\n';
    while (r > l)
    {
        if ((v[r] + v[l]) % 3 == 0)
        {
            cnt++;
            l++;
            r--;
        }
        else
            break;
    }
    int sum = 0;
    // out(cnt);
    for (int i = l; i <= r; i++)
    {
        sum += v[i];
        if (sum % 3 == 0)
        {
            cnt++;
            sum = 0;
        }
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