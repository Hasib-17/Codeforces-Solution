/*Author: Hasib; Date:26/01/23*/
#include <bits/stdc++.h>
#define ii_65                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long int
#define ul unsigned long long
#define dec greater<int>()
const ll N = 1e9 + 1;
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define all(x) (x).begin(), (x).end()
using namespace std;
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
// vector<int> g(N);
void solve()
{
    //*[START]*//
    ll n;
    cin >> n;
    vector<int> v(n), res, a, zr;
    priority_queue<int> pq;
    for (auto &i : v)
        cin >> i;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            res.push_back(v[i]);
        else
        {
            pq.push(v[i]);
            zr.push_back(v[i]);
        }
    }
    for (int i = 0; i < res.size(); i++)
    {
        if (!pq.empty())
        {
            if (pq.top() > res[i])
            {
                int x = res[i];
                res[i] = pq.top();
                pq.pop();
                pq.push(x);
            }
        }
    }
    // for (auto i : res)
    //     cout << i << ' ';
    // cout << '\n';
    while (!pq.empty())
    {
        a.push_back(pq.top());
        pq.pop();
    }
    reverse(all(a));
    map<int, int> mp;
    sort(all(zr));
    for (int i = 0; i < zr.size(); i++)
    {
        mp[zr[i]] = a[i];
    }
    int k = 0, j = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            cout << res[k] << ' ';
            k++;
        }
        else
        {
            cout << mp[v[i]] << ' ';
            // j++;
        }
    }
    cout << '\n';
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