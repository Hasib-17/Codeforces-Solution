/*Author: Hasib; Date:26/01/23*/
#include <bits/stdc++.h>
#define ii_65                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long int
#define ul unsigned long long
#define dec greater<int>()
const ll N = 1e5 + 1;
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define all(x) (x).begin(), (x).end()
using namespace std;
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
// vector<int> g(N);
void solve()
{
    //*[START]*//
    int n, k, ans = 0;
    cin >> n >> k;
    vector<int> v(n);
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int &i : v)
    {
        cin >> i;
        pq.push(i);
    }
    while (!pq.empty())
    {
        if (k > 0)
        {
            int x = pq.top();
            x *= -1;
            pq.pop();
            pq.push(x);
            k--;
        }
        if (k == 0)
            break;
    }
    while (!pq.empty())
    {
        ans += pq.top();
        pq.pop();
    }
    cout << ans << '\n';
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