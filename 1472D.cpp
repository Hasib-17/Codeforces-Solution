/*Author: Hasib; Date:26/01/23*/
#include <bits/stdc++.h>
#define ii_65                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long int
#define ul unsigned long long
#define dec greater<int>()
const ll N = 1e7 + 1;
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define all(x) (x).begin(), (x).end()
using namespace std;
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
// vector<int> g(N);
void solve()
{
    //*[START]*//
    ll n, ev = 0, od = 0, a = 0, b = 0;
    cin >> n;
    vector<ll> v(n);
    priority_queue<ll> pq;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        pq.push(v[i]);
    }
    ll Alice = 0, Bob = 0, i = 0;
    while (!pq.empty())
    {
        if (i % 2 == 0)
        {
            int x = pq.top();
            if (x % 2 == 0)
                Alice += x;
            pq.pop();
        }
        else
        {
            int x = pq.top();
            if (x % 2)
                Bob += x;
            pq.pop();
        }
        i++;
    }
    if (Alice > Bob)
        cout << "Alice\n";
    else if (Alice < Bob)
        cout << "Bob\n";
    else
        cout << "Tie\n";
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