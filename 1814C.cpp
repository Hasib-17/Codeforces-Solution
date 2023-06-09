/*Author: Hasib; Date:26/01/23*/
#include <bits/stdc++.h>
#define ii_65                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long int
#define ul unsigned long long
#define dec greater<int>()
const ll N = 1e6 + 1;
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define all(x) (x).begin(), (x).end()
using namespace std;
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
void solve()
{
    //*[START]*//
    ll n, s1, s2;
    cin >> n >> s1 >> s2;
    vector<int> v(n);
    vector<pair<int, int>> vp;
    vector<int> a, b;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        vp.push_back({v[i], i + 1});
    }
    sort(all(vp));
    reverse(all(vp));
    ll x = s1, y = s2;
    for (int i = 0; i < n; i++)
    {
        if (x > y)
        {
            a.push_back(vp[i].second);
            y += s2;
        }
        else
        {
            b.push_back(vp[i].second);
            x += s1;
        }
    }
    cout << b.size() << ' ';
    for (auto i : b)
        cout << i << ' ';
    cout << '\n';
    cout << a.size() << ' ';
    for (auto i : a)
        cout << i << ' ';
    cout << '\n';
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ii_65;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}