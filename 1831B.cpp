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
void solve()
{
    // 5 2 1 2 2
    // 2 4 2 1 1
    // je value ter subarray boro hoibo sei tai ans. 2 2 2/ 1 1 1
    //*[START]*//
    ll n, cnt = 1, ans = 0;
    cin >> n;
    vector<ll> a(n), b(n);
    for (auto &i : a)
        cin >> i;
    for (auto &i : b)
        cin >> i;
    map<ll, ll> mp1, mp2;
    int i;
    for (i = 1; i < n; i++)
    {
        if (a[i] == a[i - 1])
            cnt++;
        else
        {
            mp1[a[i - 1]] = max(cnt, mp1[a[i - 1]]);
            cnt = 1;
        }
    }
    mp1[a[i - 1]] = max(cnt, mp1[a[i - 1]]);
    // for (auto ii : mp1)
    //     cout << ii.first << ' ' << ii.second << '\n';
    cnt = 1;
    for (i = 1; i < n; i++)
    {
        if (b[i] == b[i - 1])
            cnt++;
        else
        {
            mp2[b[i - 1]] = max(cnt, mp2[b[i - 1]]);
            cnt = 1;
        }
    }
    mp2[b[i - 1]] = max(cnt, mp2[b[i - 1]]);
    for (auto ii : mp1)
    {
        ans = max(ans, ii.second + mp2[ii.first]);
    }
    for (auto ii : mp2)
    {
        ans = max(ans, ii.second + mp1[ii.first]);
    }
    cout << ans << '\n';
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
