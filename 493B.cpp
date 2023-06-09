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
    ll n, sum = 0, last = 0, mx = 0;
    cin >> n;
    vector<ll> v(n), pos, neg;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
        if (v[i] > 0)
            pos.push_back(v[i]);
        else
            neg.push_back(v[i]);
    }
    if (sum > 0)
        cout << "first\n";
    else if (sum < 0)
        cout << "second\n";
    else
    {
        int sz = min(pos.size(), neg.size());
        for (int i = 0; i < sz; i++)
        {
            if (pos[i] > abs(neg[i]))
            {
                cout << "first\n";
                return;
            }
            else if (pos[i] < abs(neg[i]))
            {
                cout << "second\n";
                return;
            }
        }
        if (v[n - 1] > 0)
            cout << "first\n";
        else
            cout << "second\n";
    }
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
