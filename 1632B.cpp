/*Author: Hasib; Date:18/02/23*/
#include <bits/stdc++.h>
#define ii_65                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long int
#define ul unsigned long long
#define dec greater<int>()
const ll N = 1e5;
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define all(x) (x).begin(), (x).end()
using namespace std;
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
// vector<int> g(N);
void solve()
{
    //*[START]*//
    ll n, cnt = 0;
    cin >> n;
    deque<ll> v;
    for (int i = 0; i < 20; i++)
    {
        if ((1 << i) >= n)
        {
            cnt = i - 1;
            break;
        }
        else
            continue;
    }
    ll k = 1 << cnt;
    for (int i = k; i < n; i++)
        v.push_back(i);
    v.push_front(0);
    for (int i = k - 1; i > 0; i--)
        v.push_front(i);
    for (auto i : v)
        cout << i << " ";
    cout << '\n';
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