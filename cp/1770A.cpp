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
    //*[START]*//
    ll n, m, sum = 0, sumb = 0;
    cin >> n >> m;
    vector<ll> a(n), b(m);
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        pq.push(a[i]);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        // sumb += b[i];
    }
    for (int i = 0; i < m; i++)
    {
        int x = pq.top();
        pq.pop();
        pq.push(b[i]);
    }
    while (!pq.empty())
    {
        sum += pq.top();
        pq.pop();
    }
    cout << sum << '\n';
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