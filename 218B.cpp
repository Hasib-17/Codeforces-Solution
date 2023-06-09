/*Author: Hasib; Date:26/01/23*/
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
    //*@[START]*//
    int n, m, mx = 0, mn = 0, x = 0;
    cin >> n >> m;
    int temp = n;
    vector<int> v(m);
    priority_queue<int> pq;
    priority_queue<int, vector<int>, greater<int>> pq1;
    for (int i = 0; i < m; i++)
    {
        cin >> v[i];
        pq.push(v[i]);
        pq1.push(v[i]);
    }
    // while (!pq.empty())
    // {
    //     cout << pq.top() << " ";
    //     pq.pop();
    // }
    while (n > 0)
    {
        mx += pq.top();
        x = pq.top();
        pq.pop();
        pq.push(x - 1);
        n--;
    }
    while (temp > 0)
    {
        mn += pq1.top();
        x = pq1.top();
        pq1.pop();
        if (x - 1 > 0)
            pq1.push(x - 1);
        temp--;
    }
    cout << mx << " " << mn << " ";
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