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
// vector<int> g(N);
void solve()
{
    //*[START]*//
    int n, cnt = 0;
    cin >> n;
    vector<int> v;
    v.push_back(0);
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    v.push_back(1440);
    for (int i = 1; i < v.size(); i++)
    {
        int x = v[i] - v[i - 1];
        cnt += (x / 120);
    }
    if (cnt > 1)
        cout << "YES\n";
    else
        cout << "NO\n";
}
int main()
{
    // freopen("cowqueue.in", "r", stdin);
    // freopen("cowqueue.out", "w", stdout);
    ii_65;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}